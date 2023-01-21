#include <stdio.h>
int main(){
	float i,a,c=0,suma=0;
	for(i=0;i<6;i++){
		scanf("%f",&a);
		if(a>0){
				c++;
				suma=suma+a;
			}
	}
	return 0;
}
