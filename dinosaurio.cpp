#include <stdio.h>
int main(){
	int a[4];
	int i,m;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
		m*=a[i];
	}
	if(m%2==0)printf("Dinosaurio\n");
	else if(m%2==1)printf("No Dinosaurio\n");
	return 0;
}
