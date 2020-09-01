#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int s=0;
    long long int ss=0;
    for(int i=1;i<101;i++){
        s+=i;
        ss+=i*i;
    }
    s=s*s;
    cout<<s-ss;//25164150
    return 0;
}