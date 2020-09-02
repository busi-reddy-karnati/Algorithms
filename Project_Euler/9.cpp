#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    long long int n=2000000;
    long long int s=2;
    for(long long int i=3;i<n;i++){
        if(isprime(i))
            s+=i;
    }
    cout<<s;
    return 0;
}