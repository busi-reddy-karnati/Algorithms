#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i<(sqrt(n));i++){
        if(n%i==0)
            return false;

    }
    return true;
}
int main(){
    //9 and 8 digits not used because they add upto a summ div by 3 or 9
    string s="7654321";
    do{
        int n=stoi(s);
        if(isprime(n)){
            cout<<n<<":Donzo";
            break;
        }
        else{
            cout<<n<<": notprime\n";
        }
    }while(prev_permutation(s.begin(),s.end()));
    return 0;
}