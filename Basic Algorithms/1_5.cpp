/*
Given two strings, find if they differ by one operation
The operations could incliude
    1.insert a character into a string
    2.delete a character from a string
    3.replace a character in a string
*/
#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define total(a) a.begin(),a.end()
#define fi(i,a,b) for(int i=a;i<b;i++)
#define finds(x,a) find(a.begin(),a.end(),x)
#define is(a)substringof(b) b.find(a)!=string::npos
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
bool check(string s1, string s2, int i, int j, int c){
    if(c>1)
        return false;
    if(i==s1.size()-1 || j==s2.size()){
        if(s1[i]!=s2[j])
            c+=1;
        if(c>1)
            return false;
        else
        {
            return true;
        }
        
    }
    if(s1[i]==s2[j]){
        
        return check(s1,s2,i+1,j+1,c);
    }
    else return (check(s1,s2,i,j+1,c+1)||check(s1,s2,i+1,j,c+1));
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.size();
    int l2=s2.size();
    if(l1<l2)
        swap(l1,l2);
    if(l1-l2>1)
        cout<<"no";

    else{
        if(check(s1,s2,0,0,0))
            cout<<"Yes";
        else
        {
            cout<<"No";
        }
    }

    return 0;

}
