#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    ll sum=0;
    ll a=1;
    ll b=2;
    while(b<4000000){
        cout<<b<<" ";
        if(b%2==0){
            sum+=b;
        }
        swap(a,b);
        b=a+b;
    }
    cout<<"\n"<<sum;//4613732
    return 0;

    
}