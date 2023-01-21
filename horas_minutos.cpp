#include <stdio.h>
int main(){
	int a,b,c,d,i=0,horas=0,minutos=0;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a==c && b==d)printf("El juego duro 24 horas\n");
	else if(a==c && b!=d)printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",d-b);
	else if(a<c && b==d)printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",c-a);
	else if(a>c && b==d){
			while(a!=b){
		a++;
		i++;
		if(a==24)a=0;
	}
	printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n\n",i);
	}
	
	
	return 0;
}
