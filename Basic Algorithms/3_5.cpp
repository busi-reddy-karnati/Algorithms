/*
Make a stack that the smallest elements are always on top.
You can use a temporary stack.

Approach: Take two stacks, if smallest is being inserted, OK. Else, remove all the ones smaller than that and push into another
Now remove all from the other and push into the first one
*/

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#define printmatrix(a) for(int i=0;i<a.size();i++)for(int j=0;j<a[0].size();j++)cout<<a[i][j]
#include<string>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define total(a) a.begin(),a.end()
#define mib map<int,bool>
#define fi(i,a,b) for(int i=a;i<b;i++)
#define finds(x,a) find(a.begin(),a.end(),x)
#define issubstringof(a,b) b.find(a)!=string::npos
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
    stack<int> s1,s2;
    cout<<"1. Push to stack and give the integer\n2. Pop the stack\n3.Give the top\n0.exit\n";
    int n=1;
    int m=INT32_MAX;
    while(n){
        cin>>n;

        if(n==1){
            int k;
            cin>>k;
            
            if(k<m){
                s1.push(k);
                m=k;
                }
            else{
                while(!s1.empty()&&s1.top()<k){
                    int w=s1.top();
                    s1.pop();
                    s2.push(w);

                }
                s1.push(k);
                while(!s2.empty()){
                    int w=s2.top();
                    s2.pop();
                    s1.push(w);
                }

            }
            cout<<"Element on top: "<<s1.top()<<"\n";
        }
        else if(n==2){
            s1.pop();
        }

    }


    return 0;


}
