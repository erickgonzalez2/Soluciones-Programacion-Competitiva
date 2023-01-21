#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int vec1[n];
	int vec2[n];
	for(int i=0;i<n;i++){
		scanf("%d",&vec1[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&vec2[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d",vec1[i]+vec2[i]);
	}
	return 0;
}
