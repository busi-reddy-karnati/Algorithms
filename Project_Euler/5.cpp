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
    int c=1;
    int p=2;
    for(int i=3;i>0;i++){
        if(isprime(i)){
            c+=1;
            p=i;
        }
        if(c==10001){
            cout<<p;
            break;
        }
    }
    return 0;//104743
}