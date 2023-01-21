#include <stdio.h>
int main(){
	int p,s,c,i=1,t=0,k=1000000;
	scanf("%d %d %d",&p,&s,&c);
	while(k--){
	t=t+s;
	if(t>=p)break;
	t=t-c;
	i++;
	}
	printf("%d\n",i);
	return 0;
}
