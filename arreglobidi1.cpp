#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int matriz[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matriz[i][j]=i+j;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%4d",matriz[i][j]);
		}
		printf("\n");
	}
}
