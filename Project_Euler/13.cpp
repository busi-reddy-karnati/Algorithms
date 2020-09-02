#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<ll,ll> hm;

ll howmany(ll n){
    ll ans=0;
    if(n==1)
        return 0;
    if(hm[n])
        return hm[n];
    else{
        if(n%2==0)
            ans=1+howmany(n/2);
        else
        {
            ans=1+howmany((3*n)+1);
        }
        
    }
    hm[n]=ans;
    return ans;
        
}
int main(){
    ll ans=0;
    ll term=0;
    for(ll i=2;i<1000000;i++){
        ll x= howmany(i);
        if(x>ans){
            ans=x; 
            term=i;

        }
        if(i%100000==0){
            cout<<i<<"\n";
        }
    }
    cout<<ans<<"  "<<term;
}