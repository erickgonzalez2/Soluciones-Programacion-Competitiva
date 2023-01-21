#include <iostream>

using namespace std;

int dr[] = {1,1,0,-1,-1,-1, 0, 1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1};

int R,C;
char grid[5][5];

int floodfill(int r,int c, char c1, char c2,int ri,int ci){
	
	if (r<0 || r>=R || c < 0 || c>= C )return 0;
	
	if (grid[r][c] != c1)return 0;
	int ans = 1;
	grid[r][c] = c2;
	
	for(int d = 0; d < 8; d++)
		ans += floodfill(r + dr[d], c + dc[d],c1,c2);
	return ans;
}

int main(){
	
}
