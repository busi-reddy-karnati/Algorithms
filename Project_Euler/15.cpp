#include<bits/stdc++.h>
using namespace std;

int getunit(int n){
    if(n==1)
        return 3;
    if(n==2)
        return 3;
     if(n==3)
        return 5;
     if(n==4)
        return 4;
     if(n==5)
        return 4;
     if(n==6)
        return 3;
     if(n==7)
        return 5;
     if(n==8)
        return 5;
     if(n==9)
        return 4;     
    return 0;   

}
int gettens(int n){
    if(n==2)
        return 6;
     if(n==3)
        return 6;
     if(n==4)
        return 5;
     if(n==5)
        return 5;
     if(n==6)
        return 5;
     if(n==7)
        return 7;
     if(n==8)
        return 6;
     if(n==9)
        return 6;
     
    return 0;   
}
int gettens1(int n){
    if(n==0)
        return 3;
    if(n==1)
        return 6;
    if(n==2)
        return 6;
    if(n==3)
        return 8;
    if(n==4)
        return 8;
    if(n==5)
        return 7;
    if(n==6)
        return 7;
    if(n==7)
        return 9;
    if(n==8)
        return 8;
    if(n==9)
        return 8;
    
}
int getmeans(int n){
    int ud=n%10;
    n=n/10;
    int td=n%10;
    n=n/10;
    int hd=n%10;
    n=n/10;
    int ans=0;
    if(hd>0){
        ans+=10;
        ans+=getunit(hd);
    }
    if(td==1){
        ans+=gettens1(ud);
    }
    else{
        ans+=gettens(td);
        ans+=getunit(ud);
    }
    return ans;
    
}
int main(){
    int ans=11;
   for(int i=1;i<1000;i++){
       int x=getmeans(i);
       ans+=x;
       cout<<"i: "<<i<<" ans: "<<x<<"\n";
   }
   ans=ans-27;//for one hundred, two hundred...etc
   cout<<ans;
    return 0;
}