#include <stdio.h>
int main(){
	int i,n;
	float a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f %f",&a,&b);
		if(b==0)printf("divisao impossivel\n");
		else printf("%.1f\n",a/b);
		
	}
	return 0;
}
