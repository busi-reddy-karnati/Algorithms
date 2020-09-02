#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll numdiv(ll n){
    ll ans=0;
    for(ll i=1;i<sqrt(n);i++){
        if(n%i==0)
            ans+=2;
        if(i==sqrt(n))
        {
            if(i*i==n)
                ans+=1;
        }
    }
    
    return ans;
}
int main(){
    ll c=0;
    ll n=500;
    ll tn=0;
    for(int i=1;i>0;i++){
        tn+=i;
        ll x= numdiv(tn);
        if(x>n){
            cout<<tn;
            break;
        }

    }
    return 0;
}