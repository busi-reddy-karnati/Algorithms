/*
Implement Stack using STL.
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
    stack<int> s;
    s.push(1);
    s.push(2);
    cout<<"s.top"<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    cout<<s.size()<<"\n";
    cout<<s.empty()<<"\n";
    s.pop();
    cout<<s.empty()<<"\n";
    return 0;



}
