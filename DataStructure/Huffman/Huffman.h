#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <string>
/* #include "File.h" */
using namespace std;

/* 定义霍夫曼树节点 */
struct HuffmanNode{
    HuffmanNode(char k,int w):key(k),weight(w),lchild(NULL),rchild(NULL){}
    HuffmanNode(){}
    HuffmanNode(int w):weight(w),lchild(NULL),rchild(NULL){}
    char key;
    int weight;
    HuffmanNode *lchild;
    HuffmanNode *rchild;
};


/* 重载优先队列 */
struct cmp{
    bool operator()(HuffmanNode *p1,HuffmanNode *p2)
    {
        return p1->weight >  p2->weight;
    }
};


/* 定义霍夫曼树类 */
class HuffmanTree
{
public:
    HuffmanTree() {}
    ~HuffmanTree() {}
    void buildTree(const map<char,unsigned> &mp,int mode);
    void getStr(HuffmanNode *p,string &str);
    vector<string> getVector();
    vector<string> v = vector<string>(260);
    string str;
    HuffmanNode* p;
};

