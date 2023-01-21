#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[6],i;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,a+6,greater<int>);
}
