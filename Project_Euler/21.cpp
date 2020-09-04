#include<bits/stdc++.h>
using namespace std;
int divsum(int n){
    int ans=1;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            ans+=i;
            ans+=n/i;
            
        }
        
    }
    if(int(sqrt(n))*int(sqrt(n))==n){
            ans+=sqrt(n);
            
    }
    return ans;
}
bool isabundant(int n){
    int i=divsum(n);
    if(i>n)
        return true;
    return false;
}
int main(){
    vector<int> a;
    cout<<"Available to use: "<<a.max_size()<<"\n";
    for(int i=12;i<=28123;i++){
        if(isabundant(i)){
            cout<<i<<" ";
            a.push_back(i);
        }
    }
    map<int,bool> hmap;
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<i<<"\n";
        for(int j=0;j<n;j++){
            if(!hmap[a[i]+a[j]]){
                hmap[a[i]+a[j]]=true;
            }
        }
    }
    int ans=0;
    for(int i=1;i<=28123;i++){
        if(!hmap[i]){
            ans+=i;
        }
    }   
    cout<<"\n"<<ans<<" ans";
    return 0;
}
