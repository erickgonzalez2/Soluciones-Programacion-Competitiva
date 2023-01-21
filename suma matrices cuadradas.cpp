#include <stdio.h>
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	int matriz[n][n];
	int matriz2[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				if(i==0||i==n-1){
			scanf("%d",&matriz[i][j]);
			}
			else{
				if(j==0||j==n-1)scanf("%d",&matriz[i][j]);
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				if(i==0||i==n-1){
			scanf("%d",&matriz2[i][j]);
			}
			else{
				if(j==0||j==n-1)scanf("%d",&matriz2[i][j]);
			}
		}
	}
	
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==0||i==n-1){
			printf("%d ",matriz[i][j]+matriz2[i][j]);
			}
			else{
				if(j==0||j==n-1)printf("%d ",matriz[i][j]+matriz2[i][j]);
				else printf("  ");
			}
		}
		printf("\n");
	}
	
}
