#include <stdio.h>
int main(){
int a,b,i=0,c,d,j=0;
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a==b && c==d)printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
	else{
	while(a!=b){
		a++;
		i++;
		if(a==24)a=0;
	}
	while(c!=d){
		c++;
		j++;
		if(c==60)c=0;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,j);
}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,j);
return 0;
}
