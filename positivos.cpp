#include <stdio.h>
int main(){
	float a,i,c=0;
	for(i=0;i<6;i++){
		scanf("%f",&a);
		if(a>0)c++;
	}
	printf("%g valores positivos\n",c);
}
