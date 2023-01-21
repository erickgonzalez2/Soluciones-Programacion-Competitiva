#include <stdio.h>
int main(){
	int a[20][20];
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
			printf("%d",a[i][j]);
		}
	}
}
