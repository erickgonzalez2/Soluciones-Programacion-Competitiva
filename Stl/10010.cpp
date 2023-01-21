#include <iostream>

using namespace std;

char grid[50][50];

int main(){
	
	int t;
	
	cin>>t;
	int f,c;
	string str;
	int nc;
	while(t--){
		
		cin.ignore();
		
		getline(cin,str);
		
		cin>>f>>c;
		
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				cin>>grid[i][j];
			}
		}
						
		cin>>nc;
		
	}
	
	
}
