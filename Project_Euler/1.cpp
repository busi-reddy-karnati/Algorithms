#include<bits/stdc++.h>
using namespace std;
bool is3multiple(int n){
    return n%3==0;
}
bool is5multiple(int n){
    return n%5==0;
}
int main(){
    int sum=0;
    for(int i=1;i<1000;i++){
        if(is3multiple(i) || is5multiple(i)){
            sum+=i;
        }
    }
    cout<<sum;//233168
    return 0;
}