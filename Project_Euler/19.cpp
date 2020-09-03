/*
We can infact use a hashmap for that.

*/

#include<bits/stdc++.h>
using namespace std;
int sumofdiv(int n){
    int ans=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            ans+=i;
    }
    return ans;
    
}
int main(){
    int ans=0;
    if(sumofdiv(220)==sumofdiv(284))
        cout<<"working";
    for(int i=2;i<10000;i++){
        if(i==sumofdiv(sumofdiv(i)) && i!=sumofdiv(i)){
            ans+=i;
            cout<<i<<"  ";
        }

    }  
    cout<<ans;
        
    return 0;
}