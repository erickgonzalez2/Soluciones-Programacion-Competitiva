#include <stdio.h>
int main(){
	int n,m,pag,totpag=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&pag);
		totpag=totpag+pag;
	}
	printf("%d",n-totpag);
	
	}
