#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b){
		if(a==b && b==c && a==c)printf("Equilateral");
		else if(a!=b && a!=c && b!=c)printf("Scalene");
		else printf("Isosceles");
	}
	else printf("Invalid");
	return 0;
}
