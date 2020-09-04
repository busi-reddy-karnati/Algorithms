#include<bits/stdc++.h>
using namespace std;
int giveans(int n){
    map<int,bool> hmap;
    int x=10;
    int cnt=0;
    while(true){
        cnt+=1;
        if(x%n==0 )
            return cnt;
        if(hmap[x])
            return cnt-=1;
        else{
            hmap[x]=true;
            x=(x%n)*10;
        }
    }
}
int main(){
    int m=0;
    int ans=0;
    for(int i=2;i<1000;i++){
        int n=giveans(i);
        if(n>m){
            m=n;
            ans=i;
        }
    }
    cout<<ans;
}