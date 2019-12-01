#include <iostream>
#include <string>
using namespace std;
//逆波兰表达式
template <class T>
class Stack
{
public:
    Stack(unsigned int size = 100);//构造函数
    ~Stack();
    void Push(T value);
    T Pop();

private:
    unsigned int size;
    unsigned int p;//栈指针
    T *data;//存放数据　　模拟数组
};

template <class T>
Stack<T>::Stack(unsigned int size)
{
    this->size = size;
    this->data = new T[size];
    p = 0;//默认指向栈底
}

template <class T >
Stack<T>::~Stack()
{
    delete []data;
}

template <class T> 
void Stack<T>::Push(T value)
{
    data[p++] = value;
    return ;
}

template <class T>
T Stack<T>::Pop()
{
    //判断栈是否为空
    return data[--p];//指向的位置是空的
}

int main()
{
    Stack<int> s(100);
    
    for(int i = 0;i<5;i++){
        s.Push(i);
        cout << i << "\n";
    }
    
    for(int i = 0;i<5;i++){
        cout << s.Pop() << "\n";
    }

    return 0;
}

