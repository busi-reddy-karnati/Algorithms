/*
Check whether one string is a permutation of another string
Approach: Sort both the strings and see is both are equal
This is because generating permutations is of higher time complexity than sorting
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
#define fi(a,b) for(int i=a;i<b;i++)
#define fd(b,a) for(int i=b;i>a;i--)
#define sorts(a) sort(a.begin(),a.end())
#define reverses(a) reverse(a.begin(),a.end())
//Assuming that the string contans only ASCII characters
int main(){
    int a[128]={0};
    int b[128]={0};
    string s1;
    string s2;
    int f=0;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
       cout<<"No";
       f=1;
    }
    else{
        for(int i=0;i<s1.size();i++){
            a[s1[i]]+=1;
            b[s2[i]]+=1;
        }
        for(int i=0;i<128;i++){
            if(a[i]!=b[i]){
                cout<<"No";
                f=1;
                break;
            }
        }
    }
    if(f==0)
        cout<<"Yes";
    return 0;

}

int main1(){
    string s1,s2;
    cin>>s1>>s2;
    sorts(s1);
    sorts(s2);
    if(s1==s2)
        cout<<"True";
    else
        cout<<"False";

    return 0;
    

}//THis invovles sorting
