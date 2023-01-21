#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		if(a-b==1)printf("ATRASAR %d SEGUNDO\n",a-b);
		else printf("ATRASAR %d SEGUNDOS\n",a-b);
	}
	if(a<b){
		if(b-a==1)printf("ADELANTAR %d SEGUNDO\n",b-a);
		else{
		printf("ADELANTAR %d SEGUNDOS\n",b-a);	
		}
	}
	
}
