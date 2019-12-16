#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);

    getModeSelect.addButton(ui.rdb_de,1);//将radioMode加进组
    getModeSelect.addButton(ui.rdb_in,2);


    //progressbar_read->setPersent(30);

}

void MainWindow::on_btn_decode_clicked()
{
    int i = getModeSelect.checkedId();//<-----这个就是选择返回的序号
    if(i == -1){
        int ret = QMessageBox::warning(NULL, "警告", "请先选择工作模式压缩/解压缩!", "压缩","解压缩");//QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        //qDebug() << ret << endl;
        if(ret == 0){
            ui.rdb_de->setChecked(true);
        }else if(ret == 1){
            ui.rdb_in->setChecked(true);
        }

    }else if(i == 1){
        if(path_des != "" && path_src != ""){
            encoded(path_src.toStdString(),path_des.toStdString());
        }
    }else if(i == 2){
        if(path_des != "" && path_src != ""){
            //decoding(path_src.toStdString(),path_des.toStdString());
        }
    }

    //encoded("/home/gxk/test.cc","/home/gxk/111");
    //decoding("/home/gxk/111","/home/gxk/222");
}

/* 编码函数，根据vector中的新编码方式，重新编码写入文件 */
void MainWindow::encoded(string src,string des)
{
    getMap(src);
    buildTree(mp,0);
    //将map信息写入文件头部
    writeHead(des);

    ui.label->setText("文件正压缩中...");
    progressbar = new RadiusProgressBar(this);
    progressbar->setMinimum(0);
    progressbar->move(100,20);
    progressbar->resize(200,40);

    char ch;//存放每次读取到的一个字符数据
    string tmp = "";//存取链接到的32为字符串
    int num = 0;//记录tmp中的01个数
    int flag = 0;//凑够32位时，用来跳过一次读取,并且记录上次剩余
    int lack0 = 0;
    int pos = 0;
    int filesize = 0;
    ifstream in(src,ios::in | ios::binary );
    ofstream out(des,ios::out | ios::binary | ios::app);

    if(!in) cout << "Error" << endl;
    if(!out) cout << "Error" << endl;

    /************************************************/
    in.seekg(0,ios::end);
    filesize = in.tellg();
    progressbar->setMaximum(filesize);
    progressbar->show();
    double k = 100/filesize;
    in.clear();
    in.seekg(0,ios::beg);
    /************************************************/

    while(in.peek() != EOF){
        if(!flag)//flag非0对应上一个字符超出的情况,flag是的话说明上次tmp中有剩余就不读取了
        {
            ch = in.get();
            progressbar->setValue(in.tellg());
            pos = (int)ch + 128;
        }


        if(num < 32){
            int lack = 32 - num;//算出差多少个01


            if(!flag){//当前串从0开始使用
                /* 分两种情况一种下当前字符不足，另一种下一个字符超出 */
                if((int)v[pos].size() <= lack){//不足
                    tmp += v[pos];
                    num += (int)v[pos].size();
                }else{
                    //tmp字符串大于lack时候只要取需要的，做好标记
                    tmp += v[pos].substr(flag,lack);
                    flag = lack;
                    num += lack;
                }

            }else{//上一轮有剩余此时串是空的
                tmp += v[pos].substr(flag);
                num += tmp.size();
                flag = 0;//flag重新置为0
            }
        }
        if(num == 32){//凑够32个字节
            unsigned int w = 0;
            /* out << strToInt(tmp);//转换成整数写入 */

            w = strToInt(tmp);
            /* out << w; *///这样是以字符串的形式写入的
            out.write((char*)(&w),sizeof(w));
            /* cout << "w = " <<  w << endl; */
            tmp.clear();
            num = 0;
        }



    }

    long long size = out.tellp();
    /* 最后不够需要补0补齐 */
    if(num != 0){
        lack0 = 32 - num;
        tmp.append(lack0,'0');
        unsigned int w = 0;
        w = strToInt(tmp);
        /* out << w; */
        out.write((char*)(&w),sizeof(w));
        /* cout << "w = " << w << endl; */
    }

    /* cout << "size = "  << size << endl; */
    /* cout << "lack0 = " << lack0 << endl; */

    out.write((char*)&size,sizeof(long long ));
    out.write((char*)&lack0,sizeof(int));

    in.close();
    out.close();

    QMessageBox::information(NULL, "成￼￼功", "文件压缩完成!");

    ui.label->clear();
    delete progressbar;
    ui.ln_src->clear();
    path_des.clear();
    path_src.clear();
    ui.ln_des->clear();
    ui.rdb_de->setChecked(false);
    ui.rdb_in->setChecked(false);

    return ;

}


map<char,unsigned> MainWindow::getMap(const string &s)
{
    progressbar_read = new QProgressBar(this);
    progressbar_read->resize(400,40);
    progressbar_read->setMinimum(0);
    progressbar_read->move(10,15);
    progressbar_read->show();

    ui.label->setText("文件正在加载中...");
    ui.label->resize(200,40);
    ui.label->move(420,0);

    ifstream in;
    char ch;
    /* out.open("tmp.txt",ios::out | ios::binary); */
    in.open(s,ios::in | ios::binary);

    /************************************/
    in.seekg(0,ios::end);
    progressbar_read->setMaximum(in.tellg());
    in.clear();
    in.seekg(0,ios::beg);
    /************************************/

    while(in.peek() != EOF){
        ch = in.get();
        progressbar_read->setValue(in.tellg());
        /* out <<  ch; */
        /* cout << (int)ch << endl; */
        if(!mp.count(ch)){
            //cout << "ch = " << (int)ch << endl;
            mp[ch] = 1;//初始化
        }else{
            mp[ch]++;
        }
    }
    in.close();
    ui.label->clear();
    delete progressbar_read;


    return mp;
}

void MainWindow::on_tb_src_clicked()
{
    int i = getModeSelect.checkedId();//<-----这个就是选择返回的序号
    if(i == -1){
        int ret = QMessageBox::warning(NULL, "警告", "请先选择工作模式压缩/解压缩!", "压缩","解压缩");//QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        //qDebug() << ret << endl;
        if(ret == 0){
            ui.rdb_de->setChecked(true);
        }else if(ret == 1){
            ui.rdb_in->setChecked(true);
        }

    }else if(i == 1){
        path_src = QFileDialog::getOpenFileName(this,"请选择要压缩的文件:","/home/gxk/","Text(*.cpp *.h *.txt);;any(*.*)");
        ui.ln_src->setText(path_src);
        //qDebug() << path_src << endl;
    }else if(i == 2){
        path_src = QFileDialog::getOpenFileName(this,"请选择要解压的文件:","/home/gxk/","Xzip(*.xzip);;any(*.*)");
        ui.ln_src->setText(path_src);
    }

}

void MainWindow::on_tb_des_clicked()
{
    if(path_src != ""){
        int i = getModeSelect.checkedId();//<-----这个就是选择返回的序号
        if(i == -1){
            int ret = QMessageBox::warning(NULL, "警告", "请先选择工作模式压缩/解压缩!", "压缩","解压缩");//QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            //qDebug() << ret << endl;
            if(ret == 0){
                ui.rdb_de->setChecked(true);
            }else if(ret == 1){
                ui.rdb_in->setChecked(true);
            }

        }else if(i == 1){
            int index;
            path_des = QFileDialog::getExistingDirectory(this,"请选择保存压缩文件位置:","/home/gxk/");

            for(int  i = path_src.size()-1;i>=0;i--){
                if(path_src[i] == '/'){
                    index = i;
                    break;
                }
            }

            path_des.append(path_src.mid(index,path_src.size()-index));

            for(int i = path_des.size()-1;i>=0;i--){
                if(path_des[i] == '.'){
                    index = i;
                    break;
                }
            }

            path_des.replace(index,path_des.size()-index,".xzip");
            ui.ln_des->setText(path_des);
            //qDebug() << path_des << endl;
        }else if(i == 2){
            path_des = QFileDialog::getExistingDirectory(this,"请选择保存解压后位置文件存放路径:","/home/gxk/");
            ui.ln_des->setText(path_des);

        }
    }
}

void MainWindow::on_ln_src_textChanged(const QString &arg1)
{
    path_src = arg1;
}

void MainWindow::on_ln_des_textChanged(const QString &arg1)
{
    path_des = arg1;
}
