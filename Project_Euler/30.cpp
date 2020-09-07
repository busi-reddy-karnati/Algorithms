#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define fi(i,m,n) for(int i=m;i<n;i++)
#define fd(i,n,m) for(int i=n;i>m;i--)
#define sort(a) sort(a.begin(),a.end())
#define next_permutation(a) next_premutation(a.begin(),a.end())
#define existsin(a,b) b.find(a)!=b.end

using namespace std;

int fac(int n){
    if(n==1 || n==0)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return 6;
    if(n==4)
        return 24;
    if(n==5)
        return 120;
    if(n==6)
        return 720;
    if(n==7)
        return 5040;
    if(n==8)
        return 8*5040;
    if(n==9)
        return 72*5040;
    return 1;
}
bool isitright(int n){
    int c=n;
    int ans=0;
    while(n>0){
        ans+=fac(n%10);
        n=n/10;
    }
    if(ans==c)
        return true;
    return false;
}
int main(){
    int ans=0;
    for(int i=3;i<1000000;i++){
        if(isitright(i))
            ans+=i;
    }
    cout<<ans;
    return 0;
}