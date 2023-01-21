#include <stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int matriz[n][m];
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<m;j++){
		printf("*");	
		}
	}
}
