#include <bits/stdc++.h>
using namespace std;

int dr[] = {1,1,0,-1,-1,-1, 0, 1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1};

int R,C;
char grid[99][99];
char grid2[99][99];

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
	ios_base::sync_with_stdio(false);cin.tie(0);
	int f,c;
	int casos;
	int i=0;
	int num;
	bool gr;
	string str;
	string ing;
	cin>>casos;
	cin.ignore();
	getline(cin,str);
	while(casos--){
		
		gr=true;
		
		int i=0;
		while(getline(cin,str) && str!="\0"){
			
			if(isdigit(str[0])&&gr){
				C++;
				gr=false;
			}
			
			if(gr){
			for(int j=0;j<str.size();j++){
				grid[i][j]=str[j];
				grid2[i][j]=str[j];
				C=j;
			}
			i++;
			R=i;
			}
			
			if(!gr){
				istringstream iss(str);
				iss>>f;
				iss>>c;
				f--;
				c--;
				num = floodfill(f,c,'W','L');
				cout<<num<<'\n';
				
				for(int i=0;i<R;i++){
					for(int j=0;j<C;j++){
						grid[i][j]=grid2[i][j];
					}
				}
			}
			
		}
		if(casos){
			cout<<'\n';
		}
	}
}
