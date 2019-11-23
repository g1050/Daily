#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int []> p(new int[5]);//定义一个指向五个元素数组的指针

    unique_ptr<int []> p2(new int[5]());//五个元素初始化为0

    cout << p2[0] << endl;//因为p是指向整个数组的指针所以不能通过指针偏移+解引用来访问,但是可以通过下标来访问元素.
    p2.release();//直接释放p2所指向的空间
    /* cout << p2[0] << endl;//空间已经释放不能通过下标再去访问 */

    return 0;
}

