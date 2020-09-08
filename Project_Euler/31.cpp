#include<bits/stdc++.h>
using namespace std;
map<int,bool> primes;
map<int,bool> ansmap;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
            
        }
    }

    return true;
}
void doprime(){
    primes[2]=true;
    for(int i=3;i<=1000000;i=i+2){
        if(isprime(i)){
            primes[i]=true;
        }
        else
        {
            primes[i]=false;
        }
        
    }

}
void countprime(){
    int c=0;
    for(int i=2;i<=1000000;i++){
        if(primes[i]==true)
            c+=1;
    }
    cout<<"Number of primes below 1000000: "<<c<<"\n";
    return;
}
int noofdigits(int n){
    int c=0;
    while(n>0){
        n=n/10;
        c+=1;
    }
    return c;
}
bool valid(int n){
    int l=noofdigits(n);
    int m=1;
    for(int i=0;i<l-1;i++)
    {
        m=m*10;
    }
    for(int i=0;i<l;i++){
        if(!primes[n])
            return false;
        int j=n%10;
        n=n/10;
        n=(j*m)+n;
    }
    return true;
}
int main(){
    doprime();
    int ans=0;
    cout<<"+++++++++PRIMES+++++++++++++++++\n";
    for(int i=2;i<=100000;i++){
        
        if(primes[i])
            cout<<i<<" ";
    }
    for(int i=2;i<1000000;i++){
        if(valid(i)){
            cout<<i<<"  ";
            ans+=1;
        }

    }
    cout<<ans<<"\n";
    return 0;
}