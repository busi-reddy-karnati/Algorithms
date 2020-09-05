#include<bits/stdc++.h>
using namespace std;
int power5[10];
int p5(int n){
    return power5[n];

}
int getans(int n){
    int ans=0;
    while(n>0){
        int num=n%10;
        ans+=p5(num);
        n=n/10;
    }
    return ans;
}
int main(){
    int ans=0;
    for(int i=0;i<10;i++){
        power5[i]=i*i*i*i*i;
    }
    for(int i=2;i<354300;i++){
        if(i%100==0)
        cout<<"   "<<i<<"\n";
        if(getans(i)==i)
            ans+=i;
    }
    cout<<ans;
    return 0;
}