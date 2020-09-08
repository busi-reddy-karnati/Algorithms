#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<i+1;j++)
            cin>>a[i][j];
        for(int j=i+1;j<100;j++)
            a[i][j]=0;
    }
    for(int i=98;i>=0;i--){
        for(int j=0;j<=i;j++){
            a[i][j]=max(a[i+1][j],a[i+1][j+1])+a[i][j];
        }
    }
    cout<<a[0][0];
    return 0;
}