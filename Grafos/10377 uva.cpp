#include <bits/stdc++.h>
using namespace std;

int matriz[60][60];

int main(){
	int n,m;
	string str;
	cin>>n;m=n;
	cin.ignore();
	while(n--){
		getline(cin,str);
		
		memset(matriz,0,sizeof(matriz));
		
		int f,c;
		cin>>f>>c;
		cin.ignore();
		for(int i=0;i<f;i++){
			getline(cin,str);
			for(int j=0;j<c;j++){
				if(str[j]=='*')matriz[i][j]=1;
				else matriz[i][j]=0;
			}
		}
		
		int x,y;
		queue <char> q;
		bool salir;
		
		cin>>x>>y;
		x--;
		y--;
		cin.ignore();
		
		while(getline(cin,str)){
			for(int i=0;i<str.size();i++){
				if(isalpha(str[i]))q.push(str[i]);
				if(str[i]=='Q')salir=true;
			}
			if(salir)break;
		}
		
		char dir='N';
		char com;
		
		while(!q.empty()){
			com=q.front();q.pop();
			if(com=='Q')break;
			switch(com){
				
				case 'R':
					if(dir=='N')dir='E';
					else if(dir=='E')dir='S';
					else if(dir=='S')dir='W';
					else if(dir=='W')dir='N';
					break;
				
				case 'L':
					if(dir=='N')dir='W';
					else if(dir=='W')dir='S';
					else if(dir=='S')dir='E';
					else if(dir=='E')dir='N';
					break;
					
				case 'F':
					switch(dir){
						case 'N':
							if(matriz[x-1][y]==0)x--;
							break;
						case 'S':
							if(matriz[x+1][y]==0)x++;
							break;
						case 'W':
							if(matriz[x][y-1]==0)y--;
							break;
						case 'E':
							if(matriz[x][y+1]==0)y++;
							break;
					}
					break;
			}
		}
		x++;
		y++;
		cout<<x<<" "<<y<<" "<<dir<<'\n';
		if(n)cout<<"\n";
	}
}
