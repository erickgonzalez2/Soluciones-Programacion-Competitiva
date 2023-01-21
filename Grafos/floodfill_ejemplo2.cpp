#include <bits/stdc++.h>
using namespace std;

int dr[] = {1,1,0,-1,-1,-1, 0, 1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1};

int R,C;
vector <vector <char>> grid;

int floodfill(int r,int c, char c1, char c2){
	
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
	
	int f,c;
	char x;
	cin>>R>>C;
	grid.assign(R,vector<char>());
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>x;
			grid[i].push_back(x);
		}
	}
	int h;
	cin>>f>>c;
	h = floodfill(f,c,'+','#');
	
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			printf("%c",grid[i][j]);
		}
		cout<<'\n';
	}
	
	cout<<h;
}
