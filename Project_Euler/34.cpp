#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define fi(i,m,n) for(int i=m;i<n;i++)
#define fd(i,n,m) for(int i=n;i>m;i--)
#define sort(a) sort(a.begin(),a.end())
#define next_permutation(a) next_permutation(a.begin(),a.end())
#define existsin(a,b) b.find(a)!=b.end

using namespace std;
int main(){
    string s="";
    for(int i=1;i<1080000;i++){
        s+=to_string(i);
    }
    int ans=(s[0]-'0')*(s[10-1]-'0')*(s[100-1]-'0')*(s[1000-1]-'0')*(s[10000-1]-'0')*(s[100000-1]-'0')*(s[1000000-1]-'0');
    cout<<ans;
}