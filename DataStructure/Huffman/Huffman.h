#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

struct cmp{
    bool operator()(pair<char,int> &a,pair<char,int> &b)
    {
        return a.first<b.first;
    }
};

/* 定义霍夫曼树节点 */
struct HuffmanNode{
    HuffmanNode(char k,int w):key(k),weight(w),lchild(NULL),rchild(NULL){}
    char key;
    int weight;
    HuffmanNode *lchild;
    HuffmanNode *rchild;
};


/* 定义霍夫曼树类 */
class HuffmanTree
{
public:
    HuffmanTree() {}
    ~HuffmanTree() {}
    void input(const map<char,int> &mp);
private:

};

