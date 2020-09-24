#include<bits/stdc++.h>
using namespace std;
bool good(string s, int ind, int div){
    string temp="";
    temp+=s[ind];
    temp+=s[ind+1];
    temp+=s[ind+2];
    long long int n=stoi(temp);
    if(n%div==0)
    return true;
    return false;
    
}
bool validated(string s){
    return (good(s,1,2)&&good(s,2,3)&&good(s,3,5)&&good(s,4,7)&&good(s,5,11)&&good(s,6,13)&&good(s,7,17));

}
int main(){
    string s="1023456789";
    string ans="";
    vector<string> strvec={};
    do{
        if(validated(s))
            strvec.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    int carry=0;
    for(int i=9;i>=0;i--){
        int sumi=carry;
        for(int j=0;j<strvec.size();j++){
            sumi+=strvec[j][i]-'0';
        }
        int digit=sumi%10;
        carry=sumi/10;
        ans=ans+to_string(digit);
    }
    
    string temps=to_string(carry);
    reverse(temps.begin(),temps.end());
    ans=ans+temps;
    reverse(ans.begin(),ans.end());
    cout<<"Ans: "<<ans;
    return 0;
}