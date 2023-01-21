#include <bits/stdc++.h>

using namespace std;

int dr[] = {1,1,0,-1,-1,-1, 0, 1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1};

vector <vector <char>> grid;
int n;

int floodfill(int r,int c,char c1, char c2){
	
	if (r<0 || r>=n || c < 0 || c>= n )return 0;
	
	if (grid[r][c] != c1)return 0;
	int ans = 1;
	grid[r][c] = c2;
	
	for(int d = 0; d < 8; d++){
		
		ans += floodfill(r + dr[d], c + dc[d],c1,c2);
	}
		
	return ans;
	
	
	
}

int main(){
	

	char x;
	int image = 1;
	
	while(cin>>n && n){
	
		int eagles = 0;
		
		
		grid.assign(n,vector<char>());	
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n;j++){
				
				cin>>x;
				grid[i].push_back(x);
			}
		}
		
		for(int i = 0;i < n; i++){
			for(int j = 0;j < n ; j++ ){
				
				if(grid[i][j]=='1'){
					
					floodfill(i,j,'1','0');
					eagles++;
					
				}
				
			}
		}
		
		cout<<"Image number "<<image<<" contains "<<eagles<<" war eagles.\n";
		image++;
		
	}
	
	
	
}
