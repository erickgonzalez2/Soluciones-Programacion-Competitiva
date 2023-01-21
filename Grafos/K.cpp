#include <bits/stdc++.h>

using namespace std;

vector <vector <int>> grafo;


int main(){
	
	int node,edges;
	int a,b;
	
	
	cin>>node>>edges;
	
	grafo.assign(node,vector<int>());
	
	while(edges--){
		
		
		cin>>a>>b;
		
		grafo[a-1].push_back(b-1);
		grafo[b-1].push_back(a-1);
		
		
		
	}
	

	
	//check
	
	vector<int> side(node, -1);
	bool is_bipartite = true;
	queue<int> q;
	int st = 0;
    q.push(st);
    side[st] = 0;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int u : grafo[v]) {
                if (side[u] == -1) {
                    side[u] = side[v] ^ 1;
                    q.push(u);
                } else {
                    is_bipartite &= side[u] != side[v];
                }
            }
        }
    

	
	
	if(is_bipartite)cout<<"Y\n";
	else cout<<"N\n";
	
	
	
		
		
	
	
	
	
}
