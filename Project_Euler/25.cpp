#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int s=1;//sum
    int i=1;//start
    int c=0;//count
    int av=0;//addvalue
    int n=1001;
    while(i<=n*n)
    {   
        if(c==0)
            av+=2;
        
        c=(c+1)%4;
        i+=av;
        s+=i;
        cout<<i<<" ";

    }
    s-=i;
    cout<<s;
    return 0;
}