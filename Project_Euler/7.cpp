#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int n){
    string s=to_string(n);
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i])
            return false;
    }
    return true;
}
int main(){
    int ans=1;
    for(int i=100;i<1000;i++){
        for(int j=100;j<1000;j++){
            int pro=i*j;
            if(ispalindrome(pro)){
                ans=max(pro,ans);
            }
        }
    }
    cout<<ans;
    return 0;
}