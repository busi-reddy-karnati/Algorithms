#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isprime(ll n){
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    ll num=600851475143;
    for(ll i=2;i<num;i++){
        if(num%i==0){
            if(isprime(num/i)){
                cout<<num/i;
                return 0;
            }
        }

    }
    return 0;
}