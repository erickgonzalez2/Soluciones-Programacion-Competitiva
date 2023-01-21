#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	
	if(a/1000>0)printf("%d billete(s) de 1000\n",a/1000);
	if(a>999)a%=1000;
	if(a/500>0)printf("%d billete(s) de 500\n",a/500);
	if(a>499)a%=500;
	if(a/200>0)printf("%d billete(s) de 200\n",a/200);
	if(a>199)a%=200;
	if(a/100>0)printf("%d billete(s) de 200\n",a/200);
	if(a>99)a%=100;
	if(a/50>0)printf("%d billete(s) de 50\n",a/50);
	if(a>49)a%=50;
	if(a/20>0)printf("%d billete(s) de 20\n",a/20);
	if(a>19)a%=20;
	if(a/10>0)printf("%d moneda(s) de 10\n",a/10);
	if(a>9)a%=10;
	if(a/5>0)printf("%d moneda(s) de 5\n",a/5);
	if(a>4)a%=5;
	if(a/2>0)printf("%d moneda(s) de 5\n",a/2);
	if(a>1)a%=2;
	if(a/1>0)printf("%d moneda(s) de 5\n",a/1);
	return 0;
}
