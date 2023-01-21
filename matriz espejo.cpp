#include <stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j,y;
	int matriz[n][m];
	int matriz2[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0,y=m-1;j<n,y>=0;j++,y--){
			matriz2[i][j]=matriz[i][y];
			}
		}
		
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",matriz2[i][j]);
		}
		printf("\n");
	}	
}
