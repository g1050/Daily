#include<iostream>
#include<cstring>
using namespace std;
class ttt
{
public:
    int a;
private:
    int b;
};
    typedef struct {
        char sign;
        int weight,parent,lchild,rchild;
    }Node;
    typedef Node *HuffmanTree;
    typedef struct{
        char name;
        int cnt;
    }what;
    what ANS[1000];
    void Select(HuffmanTree &HT,int a,int &s1,int &s2);
    HuffmanTree Create(what f[],int n){
        int m=2*n-1;
        HuffmanTree HT =new Node[m+1];
        int s1,s2;
        for(int i=1;i<=m;i++){
            HT[i].lchild=0,HT[i].rchild=0,HT[i].parent=0,HT[i].weight=0;
        }
        int head=1;
        for(int i=1;i<=256;i++){
            if(f[i].cnt>0){
                HT[head].sign=f[i].name;
                HT[head++].weight=f[i].cnt;
            } 
        }

        for(int i=n+1;i<=m;i++){
            Select(HT,i-1,s1,s2);
            HT[s1].parent = i,HT[s2].parent=i;
            HT[i].lchild = s1;HT[i].rchild=s2;
            HT[i].weight = HT[s1].weight + HT[s2].weight;
        }
        return HT;
    }

    void Select(HuffmanTree &HT,int a,int &s1,int &s2){
        int i,j,x,y;
        for(j=1;j<=a;j++)
            if(HT[j].parent==0){
                x=j;
                break;
            }
        for(i=1;i<=a;i++)
            if(HT[i].weight<HT[x].weight&&HT[i].parent==0){
                x=i;
            }
        for(j=1;j<=a;j++)
            if(HT[j].parent==0&&j!=x){
                y=j;
                break;
            }
        for(i=1;i<=a;i++)
            if(HT[i].weight<HT[y].weight&&HT[i].parent==0&&i!=x){
                y=i;
            }
        s1=x,s2=y;
    }

    typedef char ** HuffmanCode;
    void CrtHuffmanCode1(HuffmanTree ht,HuffmanCode hc,int n){
        char *cd;
        int start;
        cd =(char *)malloc(sizeof(char)*n);
        cd[n-1]='\0';

        for(int i=1;i<=n;i++){
            int start=n-1;
            int c=i;
            int p=ht[i].parent;
            while(p!=0){
                --start;
                if(c==ht[p].lchild)
                    cd[start]='0';
                else if(c==ht[p].rchild)
                    cd[start]='1';
                c=p;
                p=ht[p].parent;             
            }
            hc[i]=(char*)malloc( (n-start) * sizeof(char) );
            strcpy(hc[i],&cd[start]); 
        }
        free(cd);
    }
    void Decode(string s,HuffmanTree ht,int num){
        int j=2*num-1;
        int i=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                j=ht[j].lchild;
            else 
                j=ht[j].rchild;
            if(ht[j].lchild==0){
                cout << ht[j].sign;
                j=2*num-1;
            }
        }
    } 
    bool cmp(what a,what b){
        return a.cnt>b.cnt;
    }
    double AverageLen(what f[],HuffmanCode hc,int n){
        int sum=0;

        int head=1,fz[256]={0};
        for(int i=1;i<=256;i++){
            if(f[i].cnt>0)
                fz[head]=f[i].cnt,head++;
        }   
        for(int i=1;i<=256;i++)
            sum+=f[i].cnt;
        int tot=0;
        for(int i=1;i<=n;i++){
            tot+=strlen(hc[i])*fz[i];
        }
        return 1.0*tot/sum;
    }
int main(){
    string s;char x;int n=0;int top=0;
    while((x=cin.get())!='#'){
        s+=x;
        ANS[x].name=x;
        ANS[x].cnt++;
    }
    for(int i=1;i<=256;i++) if(ANS[i].cnt>0) n++;
    HuffmanTree ht=Create(ANS,n);
    int m=2*n-1;
    HuffmanCode hc=(char**)malloc(sizeof(char*)*(n+1));
    for(int i=1;i<=n;i++) hc[i]=(char*)malloc(sizeof(char)*n);
    CrtHuffmanCode1(ht,hc,n);
    string s1;
    s1=s;
    for(int i=0;i<s1.length();i++)
        for(int j=1;j<=n;j++)
            if(ht[j].sign==s1[i])
                cout << hc[j];
    cout << endl;
    string s2;
    cin>>s2;
    Decode(s2,ht,n);
    double Sum=AverageLen(ANS,hc,n);
    printf("\n%.2f\n",Sum); 
    return 0;
}
