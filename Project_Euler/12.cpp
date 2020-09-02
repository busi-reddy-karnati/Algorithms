#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100][50];
    for(int i=0;i<100;i++){
        for(int j=0;j<50;j++){
            cin>>a[i][j];
        }
    }
    vector<int> ans;
    int s=0;
    int carry=0;
    for(int i=49;i>=0;i--){
        cout<<"i: "<<i<<"\n";
        s=0;
        for(int j=0;j<100;j++){
            s+=a[j][i]-'0';
        }
        s+=carry;
        ans.push_back(s%10);
        carry=s/10;


        
    }
    while(carry>0){
        ans.push_back(carry%10);
        carry=carry/10;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<10;i++)
        cout<<ans[i]<<" ";
    return 0;
}