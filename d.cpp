#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("*");
		for(j=0;j<n;j++){
		printf("*");
	}
	for(i=0;i<n;i++){
		printf("*\n");
	}
	return 0;	
}


