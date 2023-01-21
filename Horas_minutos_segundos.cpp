#include <stdio.h>
int main(){
	int seg,t[3];
	scanf("%d",&seg);
	t[0]=seg/3600;
	seg%=3600;
	t[1]=seg/60;
	seg%=60;
	t[2]=seg/1;
	seg%=1;
	printf("%d:%d:%d\n",t[0],t[1],t[2]);
	return 0;
}
