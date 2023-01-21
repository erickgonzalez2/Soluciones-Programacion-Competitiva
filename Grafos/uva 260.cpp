#include <bits/stdc++.h>
using namespace std;

int row=0;
int n;
char grid[200][200];
char grid2[200][200];


int dr[] = {-1,-1, 0,0,1,1};
int dc[] = {-1, 0,-1,1,0,1};

int floodfill(int r,int c, char c1, char c2){
	
		if (r<0 || r>=n || c < 0 || c>= n )return 0;
	
	if (grid[r][c] != c1)return 0;
	int ans = 1;
	grid[r][c] = c2;
	
	for(int d = 0; d < 8; d++)
		ans += floodfill(r + dr[d], c + dc[d],c1,c2);
	return ans;
	
}


int main(){
	
	int k;
	int games=1;
	string str;
	
	while(cin>>n &&n){
		k=n;
		int i=0;
		cin.ignore();
		while(k--){
			getline(cin,str);
			
			for(int j=0;j<n;j++){
				grid[i][j]=str[j];
				grid2[i][j]=str[j];
			}
			i++;
		}
		
		
		bool jala;
		
		jala=false;
		
		cout<<games;
		for(int i=0;i<n;i++){
			
			
			floodfill(0,i,'b','w');
			
			for(int j=n-1;j<n;j++){
				for(int k=0;k<n;k++){
					if(grid[j][k]!=grid2[j][k]){
						jala=true;
						cout<<" B\n";
						break;
					}
				}
			}
			
			if(jala)break;
			
			for(int j=0;j<n;j++){
				for(int k=0;k<n;k++){
					grid[j][k]=grid2[j][k];
				}
			}
			
		}
		
		if(!jala)cout<<" W\n";
		games++;
			
		
		}
	}
