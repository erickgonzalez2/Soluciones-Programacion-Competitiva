#include <bits/stdc++.h>
using namespace std;

int recorrido[85][85];
char grid[85][85];


int dr[] = {1,0,-1, 0};
int dc[] = {0,1, 0,-1};

int R,C;
bool adentro;

int floodfill(int r,int c, char c1, char c2){
	
	if (r<0 || r>=85 || c < 0 || c>= 85 )return 0;
	
	if (grid[r][c] != c1 || grid[r][c]=='X' || recorrido[r][c]!=0)return 0;
	int ans = 1;
	recorrido[r][c]=1;
	if(grid[r+1][c] =='X' || grid[r-1][c]=='X' || grid[r][c+1]=='X' || grid[r][c-1]=='X')grid[r][c] = c2;
	
	for(int d = 0; d < 4; d++)
		ans += floodfill(r + dr[d], c + dc[d],c1,c2);
	return ans;
}


int main(){
	
	int rm;
	int x,y;
	int casos;
	int mayor;
	string str;
	string line = "__________";
	cin>>casos;
	cin.ignore();
	while(casos--){
	int i=0;
	
	memset(grid,' ',sizeof grid);
	memset(recorrido,0,sizeof recorrido);
	
	while(getline(cin,str) && str[0]!='_'){
		
			for(int j=0;j<str.size();j++){
				grid[i][j]=str[j];
				if(grid[i][j]=='X')recorrido[i][j]=3;
				if(grid[i][j]==' ')recorrido[i][j]=0;
				if(grid[i][j]=='*')recorrido[i][j]=0;
				if(str[j]=='*'){
					x=i;
					y=j;
					grid[i][j]=' ';
				}
				
				if(i==0){
					mayor=j;
				}
				
				else if(j>mayor)mayor=j;
				
			}
			i++;
			R=i;
			rm=R;
		}
		C=mayor;
		C++;
		C++;
		R++;
		
		
		floodfill(x,y,' ','#');
		
		for(int i=0;i<rm;i++){
			for(int j=0;j<C;j++){
				cout<<grid[i][j];
			}
			cout<<'\n';
		}
		 
		cout<<line<<'\n';
	
	}
}
