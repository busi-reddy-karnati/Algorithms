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
int main(){
    string s="hello computer world";
    int n=s.size();
    fd(i,n-1,-1){
        if(s[i] == ' '){
            s[i]='0';
            s.insert(i,"%2");
            
            }
    }
    cout<<s;
    return 0;
}
