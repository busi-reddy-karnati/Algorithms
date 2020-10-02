/*
Given a string, find if a permutation can form a palindrome
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool palindrome(string s){
    int n=s.size();
    for(int i=0;i<(n/2);i++){
        if(s[i]!=s[n-1-i])
            return false;
    }
    return true;
}
bool isPalindrome(string s){
    sort(s.begin(),s.end());
    do{
        if(palindrome(s))
            return true;
    }while(next_permutation(s.begin(),s.end()));
    return false;
}

bool isPalindrome1(string s){//assuming ascii values
    bool arr[128]={false};
    int oc=0;
    for(char c:s){
        if(arr[c]){
            arr[c]=false;
            oc-=1;
        }
        else{
            arr[c]=true;
            oc+=1;
        }
    }
    if(oc>1)
        return false;
    return true;
}
#include<unordered_map>
bool isPalindrome2(string s){
    int oc=0;
    unordered_map<char,int> hmap;
    for(char c:s){
        ++hmap[c];
        if(hmap[c]%2){
            oc+=1;
        }
        else
        {
            oc--;
        }        
    }    
    if(oc>1)
        return false;
    return true;
}

bool isPalindrome3(string s){
    //This will work only if there are a-z(Can be extended for A-Z)
    int n=s.size();
    int bitvec=0;
    for(char c:s){
        bitvec=bitvec^(1<<(c-'a'));
    }
    int oc=0;
    while(bitvec){
        oc+=bitvec%2;
        bitvec=bitvec>>1;
    }
    if(oc>1)
        return false;
    return true;
}


int main(){
    string s;
    cin>>s;
    cout<<"Check 1 \n";
    if(isPalindrome(s))
        cout<<"Yes one permutaion is a palindrome\n";
    else
        cout<<"No not a palindrome\n";
    cout<<"Check 2 \n";
    if(isPalindrome1(s))
        cout<<"Yes one permutaion is a palindrome\n";
    else
        cout<<"No not a palindrome\n";
    cout<<"Check 3 \n";
    if(isPalindrome2(s))
        cout<<"Yes one permutaion is a palindrome\n";
    else
        cout<<"No not a palindrome\n";
    cout<<"Check 4 \n";
    if(isPalindrome3(s))
        cout<<"Yes one permutaion is a palindrome\n";
    else
        cout<<"No not a palindrome\n";
    return 0;
}