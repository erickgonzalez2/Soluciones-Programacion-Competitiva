#include <stdio.h>
int main(){
	for(int i=0;i<2;i++){
	
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	if(a*2==b || b*2==a)printf("felizmil\n");
	else printf("tristemil\n");
}
	return 0;
}

