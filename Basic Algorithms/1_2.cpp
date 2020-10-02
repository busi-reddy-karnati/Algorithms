/*
Given two strings check whether one is a permutation of another
Given s1 and s2
*/
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
bool isPermutation(string s1,string s2){
    int a[128]={0};
    for(auto i:s1)
        a[i]+=1;
    for(auto i: s2){
        a[i]-=1;
        if(a[i]<0)
            return false;    
    }
    return true;
}

bool isPermutation2(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
        return true;
    return false;
}
#include<unordered_map>
bool isPermutation3(string s1, string s2){
    unordered_map<char,int> hmap;
    for(auto i:s1)
        hmap[i]++;
    for(auto i:s2){
        hmap[i]--;
        if(hmap[i]<0)
            return false;
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isPermutation(s1,s2))
        cout<<"check 1: Yes, One is a permutation of another\n";
    else
        cout<<"check 1: No, One is not a permutation of another\n";
    if(isPermutation2(s1,s2))
        cout<<"check 2: Yes, One is a permutation of another\n";
    else
        cout<<"check 2: No, One is not a permutation of another\n";
    if(isPermutation3(s1,s2))
        cout<<"check 3: Yes, One is a permutation of another\n";
    else
        cout<<"check 3: No, One is not a permutation of another\n";
    
    return 0;
}