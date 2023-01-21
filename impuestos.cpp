#include <stdio.h>
int main(){
	double a,b,s,c;
	scanf("%lf",&a);
	if(a<=2000)printf("Isento\n");
	if(a>2000 && a<=3000)printf("R$ %.2lf\n",(a-2000)*0.08);
	if(a>3000 && a<=4500){
		b=1000*0.08;
		a=a-3000;
		s=(a*0.18);
		printf("R$ %.2lf\n",b+s);
	}
	if(a>4500){
		b=1000*0.08;
		s=1500*0.18;
		a=a-4500;
		c=(a*0.28);
		printf("R$ %.2lf\n",b+s+c);
	}
	return 0;
}
