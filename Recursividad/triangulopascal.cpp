#include <stdio.h>

int tpascal[51][51 ];

int main(){ 
	int n;
	scanf("%d",&n);
	
	int i;
	int j;
	
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			
			if(j==0 || i==j){
				tpascal[i][j]=1;
			}
			else {
				tpascal[i][j]= tpascal[i-1][j-1]+tpascal[i-1][j];
			}
		}
	}
	
	for(i = 0; i <= n; i++){
		for(j = 0; j <= n; j ++){
			if(tpascal[i][j]!=0)printf("%6d",tpascal[i][j]);
		}
		printf("\n");
	}
}
