#include <bits/stdc++.h>

using namespace std;

int dr[] = {1,1,0,-1,-1,-1, 0, 1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1};

vector <vector <char>> grid;
int R,C;

int floodfill(int r,int c,char c1, char c2){
	
	if (r<0 || r>=R || c < 0 || c>= C )return 0;
	
	if (grid[r][c] != c1)return 0;
	int ans = 1;
	grid[r][c] = c2;
	
	for(int d = 0; d < 8; d++){
		
		ans += floodfill(r + dr[d], c + dc[d],c1,c2);
	}
		
	return ans;
	
	
	
}

int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);
	char x;
	
	while(cin>>R>>C  && R && C){
	
		int pockets = 0;
		
		
		grid.assign(R,vector<char>());	
		
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C;j++){
				
				cin>>x;
				grid[i].push_back(x);
			}
		}
		
		for(int i = 0;i < R; i++){
			for(int j = 0;j < C ; j++ ){
				
				if(grid[i][j]=='@'){
					
					floodfill(i,j,'@','*');
					pockets++;
					
				}
				
			}
		}
		cout<<pockets<<'\n';
		
	
		
	}
	
	
	
}
