#include <stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	int a[n][m];
	int i,j;
	int b=1;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			a[i][j]=b;
			b++;
		}
	}
	
	
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			printf("%d ",a[i][j]);
		}
	}
}
