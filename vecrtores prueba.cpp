#include <stdio.h>
main(){
	int vec[8],mayor;
	for(int i=0;i<8;i++){
		scanf("%d",&vec[i]);
	}
	mayor=vec[0];
	for(int i=0;i<8;i++){
		if(vec[i]>mayor){
		mayor=vec[i];
	}	
}
	printf("El mayor es %d \n",mayor);
	return 0;
}
