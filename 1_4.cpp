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
int main(){
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
    fi(i,0,256){
        arr[i]=0;
    } 
    fi(i,0,s.size()){
        arr[s[i]]+=1;
    }    
    int odd=0;
    fi(i,0,256){
        odd+=arr[i]&1;
    }
    cout<<odd<<"\n";
    if(odd>1)
        cout<<"No\n";
    else
        cout<<"Yes\n";
    
    return 0;
}
