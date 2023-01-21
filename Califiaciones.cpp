#include <stdio.h>
int main(){
	int c1,c2,c3,prom,sum;
		scanf("%d",&c1);
		scanf("%d",&c2);
		scanf("%d",&c3);
		sum=c1+c2+c3;
		prom=sum/3;
		if(prom>=6)printf("1");
		else printf("0");
		return 0;
}
