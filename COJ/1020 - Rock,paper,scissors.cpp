#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(){
	int players,ngames;
	vector <vector<char>>juegos;
	int p1,p2;
	string s1,s2;
	int v1,v2;
	
	while(cin>>players && players!=0){
		
		juegos.assign(players+1,vector<char>());
		cin>>ngames;
		while(ngames--){
			cin>>p1>>s1>>p2>>s2;
			
			if(s1=="rock"){
				if(s2=="paper"){
					juegos[p1].push_back('L');
					juegos[p2].push_back('W');
				}
				else if(s2=="scissors"){
					juegos[p1].push_back('W');
					juegos[p2].push_back('L');
				}
			}
			
			else if(s1=="paper"){
				if(s2=="rock"){
				juegos[p1].push_back('W');
				juegos[p2].push_back('L');
				}
				else if(s2=="scissors"){
					juegos[p1].push_back('L');
					juegos[p2].push_back('W');
				}
			}
			
			else if(s1=="scissors"){
				if(s2=="paper"){
				juegos[p1].push_back('W');
				juegos[p2].push_back('L');
				}
				else if(s2=="rock"){
				juegos[p1].push_back('L');
				juegos[p2].push_back('W');
				}
			}
		}
		
		for(int i=1;i<=players;i++){
			float prom =0;
			float l=0;
			float w=0;
			if(!juegos[i].empty()){
			for(int j=0;j<juegos[i].size();j++){
				if(juegos[i][j]=='W')w++;
				else l++;
			}
			prom = w/(w+l);
			printf("%.3f\n",prom);
		}
		else cout<<"-\n";
		}
		cout<<'\n';
		
		
		
		
		
	}
	return 0;
	
}
