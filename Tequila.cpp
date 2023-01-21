#include <stdio.h>
int main(){
	int mil,quini,dosc,cien,cincu,veint,die,cinco,dosp,uno;
	int cantidad;
	scanf("%d",&cantidad);
	for(int i=1;cantidad>0;i++){
		mil=i;
		cantidad-=1000;
	}
	printf("%d\n",cantidad);
	mil=mil-1;
	if(cantidad<0){
	cantidad=cantidad+1000;
	for(int i=1;cantidad>0;i++){
	quini=i;
	cantidad-=500;
	}
	quini=quini-1;
}
	if(cantidad<0){
	cantidad=cantidad+500;
	for(int i=1;cantidad>0;i++){
	dosc=i;
	cantidad-=200;
	}
}
dosc=dosc-1;
if(cantidad<0){
	cantidad=cantidad+200;
	for(int i=1;cantidad>0;i++){
	cien=i;
	cantidad-=100;
	}
}
cien=cien-1;
if(cantidad<0){
	cantidad=cantidad+100;
	for(int i=1;cantidad>0;i++){
	cincu=i;
	cantidad-=50;
	}
}
cincu=cincu-1;
if(cantidad<0){
	cantidad=cantidad+50;
	for(int i=1;cantidad>0;i++){
	veint=i;
	cantidad-=20;
	}
}
veint=veint-1;
if(cantidad<0){
	cantidad=cantidad+20;
	for(int i=1;cantidad>0;i++){
	die=i;
	cantidad-=10;
	}
}
die=die-1;
if(cantidad<0){
	cantidad=cantidad+10;
	for(int i=1;cantidad>0;i++){
	cinco=i;
	cantidad-=5;
	}
}
cinco=cinco-1;
if(cantidad<0){
	cantidad=cantidad+5;
	for(int i=1;cantidad>0;i++){
	dosp=i;
	cantidad-=2;
	}
}
dosp=dosp-1;
if(cantidad<0){
	cantidad=cantidad+2;
	for(int i=1;cantidad>0;i++){
	uno=i;
	cantidad-=1;
	}
}
uno=uno-1;
printf("%d\n",cantidad);
if(mil>0)printf("%d billetes de mil\n",mil);
if(quini>0)printf("%d billetes de quinientos\n",quini);
if(dosc>0)printf("%d billetes de doscientos\n",dosc);
if(cien>0)printf("%d billetes de cien\n",cien);
if(cincu>0)printf("%d billetes de cincuenta\n",cincu);
if(veint>0)printf("%d billetes de veinte\n",veint);
if(die>0)printf("%d monedas de diez\n",die);
if(cinco>0)printf("%d monedas de cinco\n",cinco);
if(dosp>0)printf("%d monedas de dos\n",dosp);
if(uno>0)printf("%d monedas de uno\n",uno);
return 0;
	}
