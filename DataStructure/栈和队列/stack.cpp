#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class stack
{
	struct node
	{
		T data;
		struct node *next;	
	};
public:	
	stack();
	void push(T elem);
	void pop();
	T top();
	int size();
	bool empty();
private:
	node* first;
	node* last;
	int qsize; 
};

template <class T>
bool stack<T>::empty()
{
	if(first == NULL)
		return true;
	else return false;
}

template <class T>
int stack<T>::size()
{
	return qsize;
}

template <class T>
stack<T>::stack()
{
	qsize = 0;
	
	//���õ�����,�Ҳ�����ͷ���
	first = NULL;
}

template <class T>
void stack<T>::push(T elem)
{
	node* ins = new node;
	if(ins == NULL){
		cout << "func: push(T elem) error\n" ;
		exit(0);
		//cout << "func:stack<T>::push(T elem) error line::" << __line__ << "\n";
	}
	ins->data = elem;
	
	ins->next = first;//����ͷ�巨
	first = ins;
	
	qsize++; 
	return ;
}

template <class T>
void stack<T>::pop()
{
	if(first == NULL){//ջ��ʱΪ�� 
		cout << "func: pop() error \n"; 
		exit(0) ;
	}
	//ͷ���ĺ�̽ڵ���� 
	node *tmp = first;//����ջ�ڵ�
	first = tmp->next;//�����
	
	delete tmp;
	qsize--;
	return ;
}

template <class T>
T stack<T>::top()
{
	if(first == NULL){//���д�ʱΪ�� 
		cout << "func: top() error \n"; 
		exit(0) ;
	}
	return first->data;
}



int main()
{
	stack<int> q;
	
	if(q.empty())
		cout << "Stack is empty!\n";
		
	for(int i = 0;i<5;i++){
		q.push(i);
		cout << "top = " << q.top() << "\n";
	}
	
	if(q.empty())
		cout << "Stack is empty!\n";
		
	for(int i = 0;i<5;i++){
		cout << q.top() << endl;
		
		q.pop();
		
		cout << "size = " << q.size() << endl;
	}
	return 0;
}

