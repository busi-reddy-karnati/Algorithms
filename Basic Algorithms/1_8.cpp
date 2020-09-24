/*
Given a matrix, make the row and column entirely 0 if that element is
*/
#include<iostream>
#include<vector>
#include<map>
#define printmatrix(a) for(int i=0;i<a.size();i++)for(int j=0;j<a[0].size();j++)cout<<a[i][j]
#include<string>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define total(a) a.begin(),a.end()
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
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,0,11,12},{13,14,15,16}};
    mii map1;
    mii map2;
    fi(i,0,4){
        fi(j,0,4){
            if(a[i][j]==0){
                map1[i]=1;
                map2[j]=1;
            }
        }
    }
    fi(i,0,4){
        fi(j,0,4){
            if(map1[i]||map2[j])
                a[i][j]=0;
        }
    }
    fi(i,0,4)
        cout<<"Map "<<map1[i]<<"\n";
    fi(i,0,4){
        fi(j,0,4)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}

