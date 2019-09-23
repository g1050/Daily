#include <iostream>
#include <string>
#include <stack>
#include <ctype.h>
using namespace std;

class Exp
{
public:
    Exp(string s);
    string getPostfix();
    int getPri(char c);
private:
    string s;
    stack <char> st;
};


Exp::Exp(string s)
{
    this->s = s;
}

int Exp::getPri(char c)
{
    int ret = 0;
    switch (c)
    {
        case '+':
        case '-':
            ret = 1;
            break;
        case '*':
        case '/':
            ret = 2;
            break;
        case '{':
        case '}':
            ret = -1;
            break;
        case '(':
        case ')':
            ret = 0;
            break;
    }
    return ret;
}
string Exp::getPostfix()
{
    string str = "";
    int size = s.size();

    for(int i = 0;i<size;i++){
        if(isalpha(s[i])){
            str.append(1,s[i]);
        }else{
            int pri = getPri(s[i]);

            if(s[i] == '(' || s[i] == '{'){
                st.push(s[i]);
            }
            else if(s[i] == ')' ){
                while(st.top() != '('){
                    str.append(1,st.top());
                    st.pop();
                }
                st.pop();
            }
            else if(s[i] == '}'){
                while(st.top() != '{'){
                    str.append(1,st.top());
                    st.pop();
                }
                st.pop();
            }
            else{
                //所有该输出的情况
                while(!st.empty() && pri <= getPri(st.top())  ){
                    
                    str.append(1,st.top());
                    st.pop();

                }
                st.push(s[i]);
            } 
                        
        }
    }

    //清空栈
    while(!st.empty()){
        str.append(1,st.top());
        st.pop();
    }

    return str;
}

int main()
{
    string s;
    cin >> s;
    Exp exp(s);
    cout << exp.getPostfix();
    return 0;
}

