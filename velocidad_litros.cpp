#include <stdio.h>
int main(){
	long int num,i,cont=0,cop;
	long int numbi[7];
	scanf("%ld",&num);
	cop=num;
	while(num>99){
		if(num>=100){
		num=num-100;
		cont++;
		}
	}
	numbi[0]=cont;
	cont=0;
	
		while(num>49){
		if(num>=50){
		num=num-50;
		cont++;
		}
	}
	numbi[1]=cont;
	cont=0;
	
	while(num>19){
		if(num>=20){
		num=num-20;
		cont++;
		}
	}
	numbi[2]=cont;
	cont=0;
	
	while(num>9){
		if(num>=10){
		num=num-10;
		cont++;
		}
	}
	numbi[3]=cont;
	cont=0;
	
	while(num>4){
		if(num>=5){
		num=num-5;
		cont++;
		}
	}
	numbi[4]=cont;
	cont=0;
	
	while(num>1){
		if(num>=2){
		num=num-2;
		cont++;
		}
	}
	numbi[5]=cont;
	cont=0;
	
	while(num>0){
		if(num>=1){
		num=num-1;
		cont++;
		}
	}
	numbi[6]=cont;
	cont=0;
	int notas[7]= {100,50,20,10,5,2,1};
	printf("%d\n",cop);
	for(i=0;i<7;i++){
		printf("%ld nota(s) de R$ %ld,00\n",numbi[i],notas[i]);
	}

	return 0;
}
