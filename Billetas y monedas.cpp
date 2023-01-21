#include <stdio.h>
int main(){
	float a;
	scanf("%f",&a);
	printf("NOTAS:\n");
	printf("%g nota(s) de R$ 100.00\n",a/100);
	if(a>99)a=a-100*a/100;
	printf("%g nota(s) de R$ 50.00\n",a/50);
	if(a>49)a=a-50*a/50;
	printf("%g nota(s) de R$ 20.00\n",a/20);
	if(a>19)a=a-20*a/20;
	printf("%g nota(s) de R$ 10.00\n",a/10);
	if(a>9)a=a-10*a/10);
	printf("%g nota(s) de R$ 5.00\n",a/5);
	if(a>4)a=a-(a*a/5);
	printf("%g nota(s) de R$ 2.00\n",a/2);
	if(a>1)a=a-(a*a/2);
	printf("MOEDAS:\n");
	printf("%g moeda(s) de R$ 1.00\n",a/1);
	if(a>0.99)a=a-(a*a/1);
	printf("%g moeda(s) de R$ 0.50\n",a/0.5);
	if(a>0.49)a=a-(a*a/0.50);
	printf("%g moeda(s) de R$ 0.25\n",a/0.25);
	if(a>0.24)a=a-(a*a/0.25);
	printf("%g moeda(s) de R$ 0.10\n",a/0.10);
	if(a>0.9)a=a-(a*a/0.10);
	printf("%g moeda(s) de R$ 0.05\n",a/0.05);
	a%=0.05;
	printf("%g moeda(s) de R$ 0.01\n",a/0.01);
	a%=0.01;
	return 0;
}
