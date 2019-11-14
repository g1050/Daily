#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <string>
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
    void buildTree(const map<char,int> &mp);
    void getStr(HuffmanNode *p,string &str);
    vector<string> getVector();
    void encoding(string s);
    void decoding(string s);

    void initvector(){
        for(int i = 0;i<260;i++){
            v.push_back("");
        }
        return ;


    }
    double ave;
    vector<string> v ;
private:
    string str;
    HuffmanNode* p;
};


typedef pair<char,int> Element;


void HuffmanTree::encoding(string s)
{
    double cnt = 0;
    for(int i = 0;i<(int)s.size();i++){
        cnt += v[s[i]].size();
        /* cout << v[s[i]] ; */
    }
    ave = cnt/s.size();
    /* cout << "\n"; */
    return ;
}

void HuffmanTree::decoding(string s)
{
    string ans ;
    HuffmanNode *pnode = p;


    for(int i = 0;i<(int)s.size();i++){
        if(s[i] == '0'){
            pnode = pnode->lchild;
        }else{
            pnode = pnode->rchild;
        }
        if(!pnode->lchild && !pnode->rchild){
            ans.push_back(pnode->key);
            pnode = p;
        }
    }

    cout << ans << endl;
    return ;

}

/* 返回得到的新的编码表 */
vector<string> HuffmanTree::getVector(){

    /* /1* cout <<  "A = " <<  v['A'] << endl; *1/ */
    /* /1* for(int i = 0;i<(int)'G';i++){ *1/ */
    /*     cout << (char)i << ":" << v[i] << "\n"; */
    /* } */

    return v;
}
/* 根据霍夫曼树获得相应字符的编码 */
void HuffmanTree::getStr(HuffmanNode *p,string &str)
{
    if(!p->lchild && !p->rchild){
        v[p->key] = str;
        /* cout << p->key << " " << v[p->key] << endl; */
        return ;
    }

    str.push_back('0');
    getStr(p->lchild,str);

    str.erase(str.size()-1,1);
    str.push_back('1');
    getStr(p->rchild,str); 
    str.erase(str.size()-1,1);

    return ;

}

/* 根据传入的map建立一颗霍夫曼树 */
void HuffmanTree::buildTree(const map<char,int> &mp)
{
    priority_queue<HuffmanNode *,vector<HuffmanNode *>,cmp> q;
    for(auto it = mp.begin(); it != mp.end();it++){
        //把set集合中的元素转化成一个个节点存入优先队列当中去
        HuffmanNode *p = new HuffmanNode(it->first,it->second);
        q.push(p);
    }


    while(q.size() >= 2){

        /* cout << q.top()->key << " " << q.top()->weight << endl; */  
        /* q.pop(); */

        HuffmanNode* p1 = q.top();
        q.pop();
        HuffmanNode* p2 = q.top();
        q.pop();
        p = new HuffmanNode(p1->weight+p2->weight);
        p->lchild = p1;
        p->rchild = p2;
        q.push(p);
        //最后p中保留的是根节点
    }

    getStr(p,str); 
    return ;
}

void  getmap(string s,map<char,int> &mp)
{
    for(int i = 0;i<(int)s.size();i++){
        if(mp.count(s[i]) == 0){
            mp[s[i]] = 1;
        }else{
            mp[s[i]]++;
        }
    }

    return ;
}

int main()
{

    string s1,s2;

    getline(cin,s1);
    s1.erase(s1.size()-1,1);//处理掉#
    map <char,int> mp; 
    getmap(s1,mp);

        cin  >> s2;



    HuffmanTree huffmanTree;
    huffmanTree.initvector();
    huffmanTree.buildTree(mp);
    huffmanTree.getVector();
    huffmanTree.encoding(s1);
    huffmanTree.decoding(s2);

    printf("%.2lf\n",huffmanTree.ave);

    for(auto it = mp.begin();it != mp.end();it++){
        cout << it->first << " " << it->second << " " << huffmanTree.v[it->first] << endl;;
    }


    return 0;
}
