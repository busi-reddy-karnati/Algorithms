/*
Program to check whether in a given string all are unique characters

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
#define fd(i,b,a) for(int i=b;i>a;i--)
#define sorts(a) sort(a.begin(),a.end())
#define reverses(a) reverse(a.begin(),a.end())
int main2(){
    string s;
    cin>>s;
    sorts(s);
    int flag=0;
    fi(i,1,s.size()){
        
        if(s[i]==s[i-1]){
            cout<<"False";
            flag=1;
            break;            
        }

    }
    if(flag==0)
        cout<<"True";
    return 0;
}//THis is using sorting that may use extra space
//We may assume that the string contains only a-z 
int main(){
    string s;
    cin>>s;
    int num=0;
    int f=0;
    for(int i=0;i<s.size();i++){
        int v=s[i]-'a';
        if((num&(1<<v)) > 0){
            cout<<"Nope";
            f=1;
            break;
        }
        num=num|(1<<v);
    }
    if(f==0)
    cout<<"yes";
    return 0;
}
