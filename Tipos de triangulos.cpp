#include <stdio.h>
int main(){
	double a,b,c;
	double ca,cb,cc;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(b>c && b>a){
		ca=b;
		cb=a;
		cc=c;
		if(ca>=cb+cc)printf("NAO FORMA TRIANGULO\n");
		else if(ca*ca == (cb*cb)+(cc*cc))printf("TRIANGULO RETANGULO\n");
		else if(ca*ca > (cb*cb)+(cc*cc))printf("TRIANGULO OBTUSANGULO\n");
		else if(ca*ca < (cb*cb)+(cc*cc))printf("TRIANGULO ACUTANGULO\n");
		if(ca==cb && cb==cc)printf("TRIANGULO EQUILATERO\n");
		else if(ca==cb && ca!=cc)printf("TRIANGULO ISOSCELES\n");
		else if(ca==cc && ca!=cb)printf("TRIANGULO ISOSCELES\n");
		else if(cb==cc && cb!=ca)printf("TRIANGULO ISOSCELES\n");
		else if(cb==cc && cc!=ca)printf("TRIANGULO ISOSCELES\n");
	}
	else if(c>b && c>a){
		ca=c;
		cb=a;
		cc=b;
		if(ca>=cb+cc)printf("NAO FORMA TRIANGULO\n");
		else if(ca*ca == (cb*cb)+(cc*cc))printf("TRIANGULO RETANGULO\n");
		else if(ca*ca > (cb*cb)+(cc*cc))printf("TRIANGULO OBTUSANGULO\n");
		else if(ca*ca < (cb*cb)+(cc*cc))printf("TRIANGULO ACUTANGULO\n");
		if(ca==cb && cb==cc)printf("TRIANGULO EQUILATERO\n");
		else if(ca==cb && ca!=cc)printf("TRIANGULO ISOSCELES\n");
		else if(ca==cc && ca!=cb)printf("TRIANGULO ISOSCELES\n");
		else if(cb==cc && cb!=ca)printf("TRIANGULO ISOSCELES\n");
		else if(cb==cc && cc!=ca)printf("TRIANGULO ISOSCELES\n");
	}
	else{
		ca=a;
		cb=b;
		cc=c;
		if(ca>=cb+cc)printf("NAO FORMA TRIANGULO\n");
		else if(ca*ca == (cb*cb)+(cc*cc))printf("TRIANGULO RETANGULO\n");
		else if(ca*ca > (cb*cb)+(cc*cc))printf("TRIANGULO OBTUSANGULO\n");
		else if(ca*ca < (cb*cb)+(cc*cc))printf("TRIANGULO ACUTANGULO\n");
		if(ca==cb && cb==cc)printf("TRIANGULO EQUILATERO\n");
		else if(ca==cb && ca!=cc)printf("TRIANGULO ISOSCELES\n");
		else if(ca==cc && ca!=cb)printf("TRIANGULO ISOSCELES\n");
		else if(cb==cc && cb!=ca)printf("TRIANGULO ISOSCELES\n");
		else if(cb==cc && cc!=ca)printf("TRIANGULO ISOSCELES\n");
	}
	
	
	return 0;
}
