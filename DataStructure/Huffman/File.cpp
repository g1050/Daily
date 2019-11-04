#include "File.h"

/* 编码函数，根据vector中的新编码方式，重新编码写入文件 */
void File::encoded(string src,string des,vector<string> v)
{
    char ch;//存放每次读取到的一个字符数据
    string tmp = "";//存取链接到的32为字符串
    int res;//存取32位01转换之后的证书
    int num = 0;//记录tmp中的01个数
    int flag = 0;//凑够32位时，用来跳过一次读取,并且记录上次剩余
    ifstream in(src,ios::in | ios::binary);
    ofstream out(des,ios::out | ios::binary);

    while(in.peek() != EOF){
        if(!flag)//flag非0对应上一个字符超出的情况
            ch = in.get();

        if(tmp.size() == 32){//凑够8个字节
            out << strToInt(tmp);
            tmp.clear();
            num = 0;
            flag = 0;
        }

        if(num < 32){
            int lack = 32 - num;//算出差多少个01                
            
            /* 分两种情况一种下当前字符不足，另一种下一个字符超出 */
            if((int)v[ch].size() <= lack){//不足
                tmp += v[ch];
                num += (int)v[ch].size();
            }else{
                flag = 
            }
        }


    }


    /* 最后不够需要补0补齐 */
    return ;
    
}


/* 获得字符个数对应的表,并且传递给HuffmanTree类 */
map<char,int> File::getMap(const string &s)
{
    ifstream in;
    map<char,int> mp;
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
