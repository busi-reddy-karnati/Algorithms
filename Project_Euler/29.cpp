#include<bits/stdc++.h>
using namespace std;
bool haszero(int n){
    if(n%10==0)
        return true;
    return false;
}
bool isright(float i, float j){
    float ud1=int(i)%10;
    float ud2=int(j)%10;
    float td1=int(i)/10;
    float td2=int(j)/10;
    if(float(i/j)==float(td1/ud2) && ud1==td2 ){
       // cout<<i/j;
        return true;
        
        }
    return false;
}
int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}
int main(){
    int ans=1;
    for(int i=11;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(!haszero(float(i))&&!haszero(float(j))){
                if(isright(i,j))
                    {
                        int n=gcd(i,j);
                        ans*=(j/n);
                  
                    }

            }
        }
    }
    cout<<ans;
    return 0;
}

int main1(){
    cout<<isright(49,98);
    return 0;
}