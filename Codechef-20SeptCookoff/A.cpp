#include<bits/stdc++.h>
using namespace std;
void answer(int n, int k, int l){
    if(k*l<n || (k==1&&n>1))
    cout<<"-1\n";
    else{
        int ctr=0;
        for(int i=1;i<=n;i++){
            ctr+=1;
            ctr=ctr%k;
            cout<<ctr+1<<" ";
        }
        cout<<"\n";
    }
    return;
}
int main(){
    int t;
    cin>>t;
    int n,k,l;
    while(t--){
        cin>>n>>k>>l;
        answer(n,k,l);

    }
    return 0;
}