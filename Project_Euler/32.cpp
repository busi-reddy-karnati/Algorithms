#include<bits/stdc++.h>
using namespace std;
//Working fine
bool isintplaindrome(int n){
    string s=to_string(n);
    string a=s;
    reverse(s.begin(),s.end());
    if(s==a)
        return true;
    return false;
}
bool isbinpalindrome(int n){
    string s="";
    while(n>0){
        s+='0'+n%2;
        n=n/2;
    }
    string a=s;
    reverse(a.begin(),a.end());
    if(a==s)
        return true;
    return false;

}
int main(){
    int ans=0;
   for(int i=1;i<1000000;i++){
       if(isintplaindrome(i)&&isbinpalindrome(i)){
           cout<<i<<" ";
            ans+=i;
       }
   }
   cout<<ans;
   return 0;
}