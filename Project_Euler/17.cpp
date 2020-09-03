#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[15][15];
    for(int i=0;i<15;i++){
        for(int j=0;j<i+1;j++)
            cin>>a[i][j];
        for(int j=i+1;j<15;j++)
            a[i][j]=0;
    }
    for(int i=13;i>=0;i--){
        for(int j=0;j<=i;j++){
            a[i][j]=max(a[i+1][j],a[i+1][j+1])+a[i][j];
        }
    }
    cout<<a[0][0];
    return 0;
}