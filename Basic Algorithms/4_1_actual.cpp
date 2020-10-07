#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
unordered_map<int,vector<int>> neighbours1={},neighbours2={};
void addedges1(){
	neighbours1[1]={2,4};
	neighbours1[2]={3};
	neighbours1[3]={6};
	neighbours1[4]={6};
	neighbours1[6]={5};
}

void addedges2(){
	neighbours2[7]={8,9};
	neighbours2[8]={10};
}

bool getAns(unordered_map<int,vector<int>> &neighbours,int source, int destination){
	unordered_map<int,bool> visited;
	queue<int> Q={};
	Q.push(source);
	visited[source] = true;
	while(!Q.empty()){
		
		int node = Q.front();
		Q.pop();
		for(auto i:neighbours[node]){
			if(i==destination)
				return true;
			if(!visited[i]){
				visited[i]=true;
				Q.push(i);				
			}
		}
	}
return false;
}

int main(){
	addedges1();
	addedges2();
	bool result1 = getAns(neighbours1,1,5);
	if(result1)
		cout<<"The first one is connected";
	else
		cout<<"The First one isn't connected";
	bool result2 = getAns(neighbours2,7,10);
	if(result2)
		cout<<"The second one is connected";
	else
		cout<<"\nThe second one isn't connected";
	return 0;
}