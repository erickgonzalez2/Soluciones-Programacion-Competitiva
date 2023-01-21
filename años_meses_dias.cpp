#include <stdio.h>
int main(){
	int a,d[3];
	scanf("%d",&a);
	d[0]=a/365;
	a%=365;
	d[1]=a/30;;
	a%=30;
	d[2]=a/1;
	a%=1;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",d[0],d[1],d[2]);
	return 0;
}
