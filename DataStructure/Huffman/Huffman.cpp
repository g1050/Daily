#include "Huffman.h"
typedef pair<char,int> Element;

void HuffmanTree::input(const map<char,int> &mp)
{
    priority_queue<Element,vector<Element>,cmp> q;
    for(auto it = mp.begin(); it != mp.end();it++){
        q.push(make_pair(it->first,it->second));
    }


    while(!q.empty()){
        cout << q.top().first << " " << q.top().second << endl;
        q.pop();
    }

    return ;
}
