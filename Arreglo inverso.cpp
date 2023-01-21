#include <stdio.h>
int main(){4
	int n;
	scanf("%d",&n);
	int arreglo[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arreglo[i]);
	}
	for(int i=n-1;i>-1;i--){
		printf("%d \n",arreglo[i]);
	}
	return 0;
}
