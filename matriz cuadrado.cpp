#include <stdio.h>
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	int matriz[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==0||i==n-1){
			printf("%4d",matriz[i][j]);
			}
			else{
				if(j==0||j==n-1)printf("%4d",matriz[i][j]);
				else printf("%4c",' ');
			}
		}
		printf("\n");
	}
}
