#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    progressbar = new QProgressBar;



//    progressbar->setValue(50);  // 当前进度


}

//void MainWindow::encoded(string src, string des)
//{
//    progressbar->setParent(this);
//    progressbar->resize(500,50);
//    progressbar->setOrientation(Qt::Horizontal);  // 水平方向
//    progressbar->show();
//    getMap(src);
//    buildTree(mp,0);
//    //将map信息写入文件头部
//    writeHead(des);

//    char ch;//存放每次读取到的一个字符数据
//    string tmp = "";//存取链接到的32为字符串
//    int num = 0;//记录tmp中的01个数
//    int flag = 0;//凑够32位时，用来跳过一次读取,并且记录上次剩余
//    int lack0 = 0;
//    ifstream in(src,ios::in | ios::binary );
//    ofstream out(des,ios::out | ios::binary | ios::app);

//    if(!in) cout << "Error" << endl;
//    if(!out) cout << "Error" << endl;

//    int filesize;
//    in.seekg(0,ios::end);
//    filesize = in.tellg();
//    progressbar->setMinimum(0);  // 最小值
//    progressbar->setMaximum(filesize);  // 最大值

//    in.clear();
//    in.seekg(0,ios::beg);

//    while(in.peek() != EOF){
//        if(!flag)//flag非0对应上一个字符超出的情况,flag是的话说明上次tmp中有剩余就不读取了
//        {
//            ch = in.get();
//            progressbar->setValue(in.tellg());
//        }


//        if(num < 32){
//            int lack = 32 - num;//算出差多少个01


//            if(!flag){//当前串从0开始使用
//                /* 分两种情况一种下当前字符不足，另一种下一个字符超出 */
//                if((int)v[ch].size() <= lack){//不足
//                    tmp += v[ch];
//                    num += (int)v[ch].size();
//                }else{
//                    //tmp字符串大于lack时候只要取需要的，做好标记
//                    tmp += v[ch].substr(flag,lack);
//                    flag = lack;
//                    num += lack;
//                }

//            }else{//上一轮有剩余此时串是空的
//                tmp += v[ch].substr(flag);
//                num += tmp.size();
//                flag = 0;//flag重新置为0
//            }
//        }
//        if(num == 32){//凑够32个字节
//            unsigned int w = 0;
//            /* out << strToInt(tmp);//转换成整数写入 */

//            w = strToInt(tmp);
//            /* out << w; *///这样是以字符串的形式写入的
//            out.write((char*)(&w),sizeof(w));
//            /* cout << "w = " <<  w << endl; */
//            tmp.clear();
//            num = 0;
//        }



//    }

//    long long size = out.tellp();
//    /* 最后不够需要补0补齐 */
//    if(num != 0){
//        lack0 = 32 - num;
//        tmp.append(lack0,'0');
//        unsigned int w = 0;
//        w = strToInt(tmp);
//        /* out << w; */
//        out.write((char*)(&w),sizeof(w));
//        /* cout << "w = " << w << endl; */
//    }

//    /* cout << "size = "  << size << endl; */
//    /* cout << "lack0 = " << lack0 << endl; */

//    out.write((char*)&size,sizeof(long long ));
//    out.write((char*)&lack0,sizeof(int));

//    in.close();
//    out.close();

//    return ;
//}

void MainWindow::on_btn_decode_clicked()
{
    encoded("/home/gxk/1.cc","/home/gxk/222");
//    progressbar->show();
//    progressbar->setValue(60);

}

void MainWindow::on_btn_incoding_clicked()
{
//    progressbar->setParent(this);
//    progressbar->resize(500,50);
//    progressbar->setOrientation(Qt::Horizontal);
//    progressbar->setMaximum(100);
//    progressbar->setMinimum(0);
//    progressbar->setValue(50);
//    progressbar->show();

}
