/*
Check whether one string is a permutation of another string
Approach: Sort both the strings and see is both are equal
This is because generating permutations is of higher time complexity than sorting
*/
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define total(a) a.begin(),a.end()
#define fi(a,b) for(int i=a;i<b;i++)
#define fd(b,a) for(int i=b;i>a;i--)
#define sorts(a) sort(a.begin(),a.end())
#define reverses(a) reverse(a.begin(),a.end())
int main(){
    string s1,s2;
    cin>>s1>>s2;
    sorts(s1);
    sorts(s2);
    if(s1==s2)
        cout<<"True";
    else
        cout<<"False";

    return 0;
    

}
