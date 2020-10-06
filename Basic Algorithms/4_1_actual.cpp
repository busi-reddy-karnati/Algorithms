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
}

bool getAns(int source, int destination){
	unordered_map<int,bool> visited;
	queue<int> Q={};
	cout<<"\nSource: "<<source<<" "<<"Destination: "<<destination<<"\n";
	Q.push(source);
	visited[source] = true;
	while(!Q.empty()){
		
		int node = Q.front();
		cout<<node;
		Q.pop();
		cout<<neighbours1[node][0];
		for(auto i:neighbours1[node]){
			cout<<"Node: "<<node<<" Neighbour: "<<i<<"\n";
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
	bool result1 = getAns(1,5);
	if(result1)
		cout<<"The first one is connected";
	else
		cout<<"The First one isn't connected";
	bool result2 = getAns(7,10);
	if(result2)
		cout<<"The second one is connected";
	else
		cout<<"\nThe second one isn't connected";
	return 0;
}