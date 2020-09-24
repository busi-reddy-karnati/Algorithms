/*
Given a matrix of size N*N, rotate the matrix clockwise 90degrees
You have to do it in place
Approach: Transpose a Matrix
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
#define is(a)substringof(b) b.find(a)!=string::npos
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
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    fi(i,0,4){
        fi(j,0,4)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    //Transpose The matrix
    fi(i,0,4){
        fi(j,i+1,4){
            swap(a[i][j],a[j][i]);
        }
    }
    fi(i,0,4){
        fi(j,0,4)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    //Mirror the Matrix
    fi(i,0,4){
        fi(j,0,2){
            swap(a[i][j],a[i][4-j-1]);
        }
    }
    fi(i,0,4){
        fi(j,0,4)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }

    return 0;
}
