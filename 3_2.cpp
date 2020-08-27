/*
In addition to the stack push and pop, give the smallest element using stacks
All the operations in constant time
*/

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#define printmatrix(a) for(int i=0;i<a.size();i++)for(int j=0;j<a[0].size();j++)cout<<a[i][j]
#include<string>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define total(a) a.begin(),a.end()
#define mib map<int,bool>
#define fi(i,a,b) for(int i=a;i<b;i++)
#define finds(x,a) find(a.begin(),a.end(),x)
#define issubstringof(a,b) b.find(a)!=string::npos
#define NO_OF_CHARS 256
#define fd(i,b,a) for(int i=b;i>a;i--)
#define sorts(a) sort(a.begin(),a.end())
#define mii map<int,int>
#define mci map<char,int>
#define msi map<string,int>
#define mivi map<int,vector<int>>
#define mcvi map<char,vector<int>>
#define mcvc map<char,vector<char>>
#define mivc map<int,vector<char>>
#define reverses(a) reverse(a.begin(),a.end())
int main(){
    
    stack<int> s1,s2;
    auto getmin=[&](){
        int m=INT32_MAX;
        while(!s1.empty()){
            int k=s1.top();
            m=min(k,m);
            s2.push(k);
            s1.pop();
        }
        while(!s2.empty()){
            int k=s2.top();
            s1.push(k);
            s2.pop();
        }
        return m;
    };
    cout<<"1. Push to stack and give the integer\n2. Pop the stack\n3.Give the smallest element\n0.exit\n";
    int f=1;
    int minelem=INT32_MAX;
    int n,k,l,m;
    while(f){
        cin>>n;
        f=n;
        if(n==1){
            cin>>k;
            s1.push(k);
            if(k<minelem){
                minelem=k;
            }
        }
        else if(n==2){
            if(!s1.empty()){
                l=s1.top();
                s1.pop();
                if(l==minelem){
                    minelem=getmin();
                }
                
            }
        }
        else if(n==3){
            cout<<"Minimum Element "<<minelem<<"\n";
        }
    }
    return 0;

}
