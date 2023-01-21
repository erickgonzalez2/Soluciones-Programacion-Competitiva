#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int matriz[n][n];
	int i,j;
	int cont;
	for(i=0;i<n;i++){
	 for(j=0;j<n;j++){
	 	scanf("%d",&matriz[i][j]);
	 }
	}
	
	for(i=0;i<n;i++){
	 for(j=0;j<n;j++){
	 	if(matriz[i][j]==matriz[j][i])cont=1;
	 	else{
	 		cont=0;
			 break;
		 }
	 }
	}
	
	if(cont==1)printf("SI\n");
	if(cont==0)printf("NO\n");
}
