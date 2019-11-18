#include "File.h"

string File::getBin(unsigned num)
{
    string tmp = "";
    unsigned mask = 1u << 31;
    while(mask){
        tmp.append(1,(num & mask ? '1' : '0'));
        mask >>= 1;
    }
    return tmp;
}
/* 译码函数，由压缩文件头部的信息解压文件 */
void File::decoding(string src,string des)
{
    char ch;//每次写入一个char
    char tmp[10];
    unsigned int num = 0;
    ifstream in(src,ios::in | ios::binary);
    ofstream out;
    out.open(des,ios::out | ios::binary);
    mapinfo node;
    HuffmanNode *t = p;
    if(p == NULL) cout << "WTF" << endl;
    if(!in) cout << "Error";
    if(!out) cout << "Error";

    int flag = 0;//map建立完成之前一直是0,建立完成后改为1 
    int flag2 = 0;//建树前是0,建树后改为1

    long long size ;
    in.read((char*)&size,sizeof(size));

    while(in.peek() != EOF){


        //读取表头信息建立map,通过map建树,
        switch(flag){
        case 0:
            in.read((char*)&node,sizeof(node));
            if(node.num == (unsigned)-1){//读到表头信息结束位置
                flag = 1;
            }else
                mp[node.ch] = node.num;

            break;
        case 1:
            if(!flag2){
                cout << "create Tree!" << endl;
                buildTree(mp,1);
                t = p;
                for(auto it = mp.begin();it != mp.end();it++)
                {
                    cout << it->first << " " << it->second << endl;
                }
                flag2 = 1;
            }else{
                if(size == in.tellg()) break;
                in.read((char*)&num,4);
                cout << "num = "<<num << endl;
                /* 先将整数转换为01序列 */
                string str2 =getBin(num);                
                /* 根据建立的霍夫曼树解析并且写入文件 */
                for(int i = 0;i<(int)str2.size();i++){
                    if(str2[i] == '0'){
                        t = t->lchild;
                    }else{
                        t = t->rchild;
                    }

                    if(!t->lchild && !t->rchild){
                        ch = t->key;
                        out.write(&ch,sizeof(ch));
                        t = p;
                    }
                }
                
            }

            break;

        }
    } 
    in.close();
    out.close();


    return ;
}

void File::writeHead(string &des)
{
    long long int size = 0;//记录文件大小这里仅占位
    //创建文件，并且写入260个字符信息
    ofstream crt;
    crt.open(des);
    crt.write((char*)&size,sizeof(long long));//记录文件大小
    mapinfo node;
    for(auto it = mp.begin(); it != mp.end();it++){
        node.ch = it->first;
        node.num = it->second;
        crt.write((char*)&node,sizeof(node));
    } 

    node.num = -1;//写入一个特殊nodei作为mapinfo的结束标志
    crt.write((char*)&node,sizeof(node));
    return ;
}

/* 编码函数，根据vector中的新编码方式，重新编码写入文件 */
void File::encoded(string src,string des)
{
    getMap(src);
    buildTree(mp,0);
    //将map信息写入文件头部
    writeHead(des); 

    char ch;//存放每次读取到的一个字符数据
    string tmp = "";//存取链接到的32为字符串
    int num = 0;//记录tmp中的01个数
    int flag = 0;//凑够32位时，用来跳过一次读取,并且记录上次剩余
    ifstream in(src,ios::in | ios::binary );
    ofstream out(des,ios::out | ios::binary | ios::app);

    if(!in) cout << "Error" << endl;
    if(!out) cout << "Error" << endl;
    while(in.peek() != EOF){
        if(!flag)//flag非0对应上一个字符超出的情况,flag是的话说明上次tmp中有剩余就不读取了
            ch = in.get();

        if(num == 32){//凑够32个字节
            unsigned int w = 0;
            /* out << strToInt(tmp);//转换成整数写入 */

            w = strToInt(tmp);
            /* out << w; *///这样是以字符串的形式写入的
            out.write((char*)(&w),sizeof(w));
            cout << "w = " <<  w << endl;
            tmp.clear();
            num = 0;
        }

        if(num < 32){
            int lack = 32 - num;//算出差多少个01                


            if(!flag){//当前串从0开始使用
                /* 分两种情况一种下当前字符不足，另一种下一个字符超出 */
                if((int)v[ch].size() <= lack){//不足
                    tmp += v[ch];
                    num += (int)v[ch].size();
                }else{
                    //tmp字符串大于lack时候只要取需要的，做好标记
                    tmp += v[ch].substr(flag,lack);
                    flag = lack;
                    num += lack;
                }

            }else{//上一轮有剩余此时串是空的
                tmp += v[ch].substr(flag);
                num += tmp.size();
                flag = 0;//flag重新置为0
            }
        }


    }
    
    long long size = out.tellp();
    /* 最后不够需要补0补齐 */
    if(num != 0){
        tmp.append(32-num,'0');
        unsigned int w = 0;
        w = strToInt(tmp);
        /* out << w; */
        out.write((char*)(&w),sizeof(w));
        cout << "w = " << w << endl;
    }

    

    in.close();
    out.close();
    
    ofstream beg(des,ios :: app | ios::out | ios::binary); 
    beg.write((char*)&size,sizeof(size));
    beg.close();
    return ;

}


/* 获得字符个数对应的表,并且传递给HuffmanTree类 */
map<char,unsigned> File::getMap(const string &s)
{
    ifstream in;
    char ch;
    /* out.open("tmp.txt",ios::out | ios::binary); */
    in.open(s,ios::in | ios::binary);
    while(in.peek() != EOF){
        ch = in.get();
        /* out <<  ch; */
        /* cout << (int)ch << endl; */
        if(!mp.count(ch)){
            mp[ch] = 1;//初始化
        }else{
            mp[ch]++;
        }
    }
    in.close();

    return mp;
}
