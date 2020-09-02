#include<bits/stdc++.h>
using namespace std;

int getright(int a[][20], int i, int j){
    return a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
}
int getdown(int a[][20], int i, int j){
    return a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
}

int getdiag(int a[][20], int i, int j){
    return a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
}
int getdiagleft(int a[][20], int i, int j){
    return a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
}
int main(){
    int a[20][20];
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++)
            cin>>a[i][j];
    }
    int ans=0;
    for(int i=0;i<=16;i++){
        for(int j=0;j<=19;j++){
            int n=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
            ans=max(ans,(a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]));
        }
    }
    for(int i=0;i<=19;i++){
        for(int j=0;j<=16;j++){
            ans=max(ans,a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
        }
    }
    for(int i=0;i<=16;i++){
        for(int j=0;j<=16;j++){
            ans=max(ans,a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
        }
    }
    for(int i=0;i<=16;i++){
        for(int j=3;j<=19;j++){
            ans=max(ans,a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3]);
        }
    }
    cout<<ans;//70600674
    return 0;
}