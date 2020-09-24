/*
To find if the given string has a permutation that is palindrome
Approach: Use a hash map and store the counts of each char. If more that one character has odd number of occurances, it isn't
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
#define fi(i,a,b) for(int i=a;i<b;i++)
#define finds(x,a) find(a.begin(),a.end(),x)
#define NO_OF_CHARS 256
#define fd(i,b,a) for(int i=b;i>a;i--)
#define sorts(a) sort(a.begin(),a.end())
#define mii map<int,int>
#define mci map<char,int>
#define msi map<string,int>
#define mivi map<int,vector<int>>
#define mcvi map<char,vector<int>>
#define mcvc map<char,vector<char>>
#define mivc map<int,vector<char>>
#define reverses(a) reverse(a.begin(),a.end())

int main(){//assuming a-z only
    int bv=0;
    string s;
    int oc=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int num=s[i]-'a';
        int x= 1<<num;
        if((x&bv)>0){
            oc-=1;
            bv=(~x&bv);
        }
        else{
            oc+=1;
            bv=(bv|x);
        }
    }
    if(oc>1){
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }
    
    return 0;
}
int main2(){
    mci hmap;
    string s;
    cin>>s;
    //To remove spaces
    fd(i,s.size()-1,-1){
        if(s[i]==' '){
            s.erase(s.begin()+i);
        }
    }    

    int arr[256];
    int oc=0;
    fi(i,0,256){
        arr[i]=0;
    } 
    fi(i,0,s.size()){
        arr[s[i]]+=1;
        if(arr[s[i]]%2)
            oc+=1;
        else
            oc-=1;
    }    
    if(oc>1)
        cout<<"False";
    else
    {
        cout<<"True";
    }
    
    
    
    return 0;
}//THis counts the instances of odd. We just need odd or even, so we can have bit vector
