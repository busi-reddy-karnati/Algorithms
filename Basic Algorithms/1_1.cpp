/*
Program to check whether in a given string all are unique characters

*/
#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
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
//using a hashmap
int main(){
    string s;
    cin>>s;
    unordered_map<char,bool> hmap;
    for(auto c:s){
        if(hmap[c]){
            cout<<"Duplicate";
            return 0;
        }
        hmap[c]=true;
        
    }
    cout<<"Not";
    return 0;
}
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
int main4(){
    string s="absAjk";
    bool a[128]={false};
    for(char c:s){
        if(a[c]){
            cout<<"Duplicate";
            return 0;
         }
         a[c]=true;
        
    }
    cout<<"Not duplicate";
    return 0;
}

int main3(){
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
