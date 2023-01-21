#include <stdio.h>
int main(){
	int i,a,nc,j=0;
	scanf("%d",&nc);
	for(i=0;i<nc;i++){
		scanf("%d",&a);
		if(a%a==0)j++;
		if(a%1==0)j++;
		if(a%2==0)j++;
		if(a%3==0)j++;
		if(a%5==0)j++;
		if(a%7==0)j++;
		if(a%11==0)j++;
		if(a%13==0)j++;
		if(a%17==0)j++;
		if(a%19==0)j++;
		if(a%23==0)j++;
		if(a%29==0)j++;
		if(a%31==0)j++;
		if(a%37==0)j++;
		if(a%41==0)j++;
		if(a%43==0)j++;
		if(a%47==0)j++;
		printf("%d\n",j);
		j=0;
	}
}
