#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int vec[n];
	for(i=0;i<n;i++){
		scanf("%d",&vec[i]);
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--){
		if(vec[i]==vec[j]);
		else{
			printf("NO\n");
			return 0;
		}
	}
	printf("SI\n");	
}
