#include <bits/stdc++.h>
using namespace std;

int main(){
	
	map<string, vector<string>> graph;

	graph["A"] = {"B", "C"};
	graph["B"] = {"D", "E"};
	graph["C"] = {"F"}; 

	queue<string> q;
	set<string> visited;
	
	q.push("A");
	visited.insert("A");

	while(!q.empty()){
		string current = q.front();
		q.pop(); 

		cout << current << ' ';

		for(const auto& neighbor : graph[current]){

			if(!visited.count(neighbor)){
				visited.insert(neighbor);
				q.push(neighbor);
			}
			
		}
	}

	return 0;
}
