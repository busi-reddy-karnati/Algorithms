/*
Implemment BFS 
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
#define isinmap(a,m) m.find(a)!=m.end()
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

class Graph{
    public:
        mivi adjlist;
        mib visited;
        queue<int> q;
        void insert(int a, int b){
            if(isinmap(a,adjlist)){
                adjlist[a].push_back(b);
            }
            else{
                adjlist[a]={b};
            }

            if(isinmap(b,adjlist)){
                adjlist[b].push_back(a);
            }
            else{
                adjlist[b]={a};
            }

        }

        void bfs(){
            while(!q.empty()){
                int val=q.front();
                q.pop();
                if(!visited[val]){
                    cout<<val<<" ";
                    visited[val]=true;
                    for(int i: adjlist[val]){
                        q.push(i);
                    }

                }
                

            }
        }
};


int main(){
    Graph* g=new Graph();
    g->insert(1,2);
    g->insert(1,3);
    g->insert(3,4);
    g->insert(2,4);
    g->insert(4,5);
    g->q.push(1);
    g->bfs();
    return 0;
    



}

