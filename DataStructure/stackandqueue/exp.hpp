#ifndef _EXP_H_
#define _EXP_H_

#include <string>
#include "stack.hpp"
#include <vector>
#include <ctype.h>
using namespace std;

class Exp
{
public:
    Exp(string s) {
        this->s = s;
    }
    ~Exp() {}
    bool ifLegal();
    void toPostfix();
    int getPriority(char c);
    int getValue();
private:
    string s;
    string postfix;
    vector <char> v;
};

int Exp::getPriority(char c)
{
    if(c == '(') return 1;
    else if(c == '+' || c == '-') return 2;
    else if(c == '*' || c == '/') return 3;
    else return 4;
}
bool Exp::ifLegal()
{
    int cnt = 0;
    int size = s.size();
    
    if(s[0] == '/' || s[0] == '*')
        return false;
    if(s[size-1] == '/' || s[size-1] == '*') 
        return false;

    for(int i = 0;i<size;i++){
        if(s[i] == '('){
            if(i+1 < size && s[i+1] == ')')
                return false;
            cnt++;
        }
        else if(s[i] == ')') cnt--;
        else if(s[i] == '/'){// /0 /*
            if(i+1 < size && (s[i+1] == '0' || s[i+1] == '*'))
                return false;
        }
        else if(s[i] == '*'){
            if(i+1 <  size && s[i+1] == '/')
                return false;
        }
    }
    
    if(cnt) return false;

    return true;
        
}

void Exp::toPostfix()
{
   string tmp;
   stack <char> st;
   int size = s.size();
   for(int i = 0;i < size ;i++){
    
       if(isalnum(s[i])) v.push_back(s[i]);
       else if(st.empty()){
           st.push(s[i]);
       }else{
           while(!st.empty() && getPriority(st.top()) >= getPriority(s[i])){
                v.push_back(st.top());
                st.pop();
           }
           st.push(s[i]);
       }
   }

   while(!st.empty()){
       v.push_back(st.top());
       st.pop();
   }

   for(int i = 0;i<(int)v.size();i++) cout << v[i];
   return ;
}
#endif

