/*
Compress the string is becomes smaller
abc=> abc
aaabbbccc
a3b3c3
Mistake: remember to add the last element
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
int main(){
    string s;
    cin>>s;
    int factor=0;
    char elem=s[0];
    int fr=1;
    fi(i,1,s.size()){
        if(s[i]==elem){
            fr+=1;
        }
        else{
            factor=factor+(fr-(to_string(fr).size())-1);
            elem=s[i];
            fr=1;
        }

    }
    factor=factor+(fr-(to_string(fr).size())-1);
    if(factor>0){
        string ans="";
        elem=s[0];
        fr=1;
        fi(i,1,s.size()){
            if(s[i]==elem)
                fr+=1;
            else{
                ans=ans+elem+to_string(fr);
                elem=s[i];
                fr=1;
            }
            
        }
        ans=ans+elem+to_string(fr);
        cout<<ans;
    }
    else{
        cout<<s;
    }
    return 0;
}
