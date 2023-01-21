#include <bits/stdc++.h>
using namespace std;
int R, C;
int main(){
    cin>>R>>C;
    string palabra;
    int con = 0;
    int con2 = 0;
    cin>>palabra;
    int M[R][R];
    char M2[R][R];
    
    for(int i=0;i<R;i++){
    	con = con2;
    	con2++;
    	if(con2>=C)con2=0;
    	for(int j=0;j<R;j++){
    		
    		M2[i][j]=palabra[con];
    		con++;
    		if(con>=C)con=0;
		}
	}
        
    for(int i=0; i<R; i++){
        for(int j=0; j<R; j++){
            char c;
            cin>>c;
           if(M2[i][j]==c) M[i][j]=1;
            else M[i][j] = 0;
        }
    }
    
     vector<vector<int>>mat;
     
     vector.assign(vector<int>,C);
    
    
}
