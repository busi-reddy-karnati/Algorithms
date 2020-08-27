/*
Implement a queue using two stacks
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
    int flag=true;
    cout<<"1 to enque and the integer\n";
    cout<<"2 to deque\n";
    cout<<"0 to exit\n";
    
    while(flag){
        int n;
        cin>>n;
        if(n==1){
            int k;
            cin>>k;
            s1.push(k);
        }
        else if(n==2){
            while(!s1.empty()){
                int l=s1.top();
                s2.push(l);
                s1.pop();

            }
            if(!s2.empty())
                s2.pop();
            while(!s2.empty()){
                int l=s2.top();
                s1.push(l);
                s2.pop();
                
            }

        }
        flag=n;
    }
    while(s1.size()){
        cout<<s1.top()<<"\n";
        s1.pop();
    }
    return 0;
}
