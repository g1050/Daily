#include <QCoreApplication>
#include "mystring.h"

int main(int argc, char *argv[])
{
    MyString s1;
    MyString s2("Hello C++");
    MyString s3 = s2;
    MyString s4;
    s4 = s2;

    std::cout << s4 << std::endl;
    std::cout << s4[1] << std::endl;

//    s4[1] = '3';
    std::cout << s4[1] << std::endl;

    std::cout << s4 << " " << s2 << std::endl;

    if(s4 == s2){
        std::cout << "equal1" << std::endl;
    }else{
        std::cout << "unequal1" << std::endl;
    }

    if(s2 == "Hello C++"){
        std::cout << "equal2"  << std::endl;
    }else{
        std::cout << "unequal2"  << std::endl;
    }


    /*****************> < *******************/
    MyString s5 = "100";
    MyString s6 = "001";
    std::cout << s5 << std::endl;
    std::cout << s6 << std::endl;

    if(s5 > s6){
       std::cout << "s5 is bigger than s6" << std::endl;;
    }else{
       std::cout << "s6 is smaller than s5" << std::endl;;
    }

    if(s5 > "001" ){
        std::cout << "s5 is bigger than 001" << std::endl;
    }else{
        std::cout << "s5 is smaller than 001" << std::endl;
    }

    if(s5 < "001"){
        std::cout << "s5 is smaller than 001" << std::endl;
    }else{
        std::cout << "s5 is bigger than 001" << std::endl;
    }


    if(s6 < s5){
       std::cout << "s6 is bigger than s5" << std::endl;
    }else{
       std::cout << "s5 is smaller than s6" << std::endl;
    }

//    QCoreApplication a(argc, argv);

//    return a.exec();

}
