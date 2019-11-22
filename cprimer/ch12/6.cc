#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<string> p1(new string());//定义一个unique_ptr类型的指针 
    /* unique_ptr<string> p(p1);//错误的　unique_ptr不支持拷贝。 */
    unique_ptr<int> p2(new int(10));//定义一个空的unique_ptr类型的智能指针
   unique_ptr<string> p3; 
    /* p2 = p1;//不能赋值 */
    /* p2 = new string();//不可赋值　赋值号也就不可用 */

   *p1 = "Hello" ;
   cout << *p1 << endl;
   p1.reset();//释放p1所指向的空间     
   /* cout << *p1 << endl;//p1所指向的空间已经释放 */
   p1.reset(new string("World"));//释放p1所指向的空间，并且另p1指向新的一块空间

   /* delete p2;//不能delete 智能指针 */
   int *q = p2.release();//返回一个p2之前指向内容的裸指针
    delete q;//release返回的是一个普通指针

    p3.reset(p1.release());//把p1所有权转交给p3
    cout << *p3 << endl;

    return 0;
}

