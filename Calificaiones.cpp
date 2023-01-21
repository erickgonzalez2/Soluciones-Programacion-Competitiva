#include <stdio.h>
int main(){
	float cal,sumcal=0,prom,pprom,mycal,n,band=0;
	scanf(" %f",&n);
	for(int i=0;i<n-1;i++){
		scanf("%f",&cal);
		if(cal>=6)sumcal=sumcal+cal;
		else band++;
		}
	scanf("%f",&prom);
	n=n-band;
	pprom=prom*n;
	mycal=pprom-sumcal;
	if(mycal==10)printf("10")
	
	

	
	
	
	
	;else if(mycal>=6) printf("%.2f",mycal);
	return 0;
}
