#include <stdio.h>

int main(){
	int j=0,n, arr[n];
	scanf("%d",&n);
	for(int i=0; i<n;i++,j++){
		scanf("%d",&arr[j]);
		while(j>=0 && arr[j-1]==arr[j]){
			arr[j-1]*=2;
			j--;
		}
	}
	printf("%d",j,"\n");
	for(j--;j>=0;j--){
		printf("%d",arr[j],"\n");
}
	return 0;
}
