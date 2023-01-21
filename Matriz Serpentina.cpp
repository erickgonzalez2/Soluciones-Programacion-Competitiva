#include <stdio.h>
int main(){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int matriz[n][m];
	int index=0;	
	int it=1;
	while(1){		
		//adelante
		for(i=0;i<m;i++){
			matriz[index][i]=it;
			it++;
		}
		index++;
		if(index==n)break;
		//atras
		for(i=m-1;i>=0;i--){
			matriz[index][i]=it;
			it++;
		}
		index++;
		if(index==n)break;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%4d",matriz[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
