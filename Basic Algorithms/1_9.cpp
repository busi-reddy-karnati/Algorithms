/*
Given two strings find if one string is a rotation of another, using is substring only once
*/
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define total(a) a.begin(),a.end()
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
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    s1=s1+s1;
    if(issubstringof(s2,s1)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No";
    }
    
    return 0;
}
