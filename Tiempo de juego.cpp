#include <stdio.h>
int main(){
int a,b,i=0;
scanf("%d %d",&a,&b);
if(a==b)printf("O JOGO DUROU 24 HORA(S)\n");
	else{
	while(a!=b){
		a++;
		i++;
		if(a==24)a=0;
	}
	printf("O JOGO DUROU %d HORA(S)\n",i);
}
return 0;
}
