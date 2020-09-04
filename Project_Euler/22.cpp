#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="0123456789";
    int c=0;
    do{
        c+=1;
        if(c%10000==0)
        cout<<s<<"  "<<c<<"\n";
    }while(next_permutation(s.begin(),s.end()));
}