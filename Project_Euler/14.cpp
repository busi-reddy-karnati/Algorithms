#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int


int main(){
    ll pro=1;
    for(ll i=21;i<40;i=i+2){
        pro=pro*i;
        cout<<" i "<<i<<"\n";
    }
    pro*=1024;

    ll d=1;
    for(ll i=1;i<11;i++)
        d=d*i;
    cout<<(pro/d);
    return 0;//137846528820
}