#include <QCoreApplication>
#include "mystring.h"

int main(int argc, char *argv[])
{
    /***********costructor test*************/
    MyString s1;
    MyString s2("Hello C++");
    MyString s3 = s2;
    MyString s4;
    s4 = s2;
    MyString s8(10,'a');
    MyString s9("Hello",3);
    MyString s10("Hello",2,3);
    MyString s7(100);
    MyString s11 = "";
    s10.back() = 'l';

    for(int i = 0;i<s10.size();i++){
        std::cout << s10.at(i);
    }
    std::cout << std::endl;

    if(s11.empty()){
        std::cout << "empty" << std::endl;
    }
    s7 = 'c';
    s7 = "Hello C";
    s7.resize(s7.size()+2,'+');
    s7.resize(5);
    strcpy(s7.getPointer(),"Hello world");
    s4[1] = '3';
    if(s4 == s2){
        std::cout << "equal1" << std::endl;
    }
    if(s2 == "Hello C++"){
        std::cout << "equal2"  << std::endl;
    }
    /*****************> < *******************/
    MyString s5 = "100";
    MyString s6 = "001";
    if(s5 > s6){
       std::cout << "s5 is bigger than s6" << std::endl;;
    }
    if(s5 > "001" ){
        std::cout << "s5 is bigger than 001" << std::endl;
    }






//    QCoreApplication a(argc, argv);

//    return a.exec();

}
