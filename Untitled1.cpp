#include<stdio.h>
int main()
{	
int a,k=1;
scanf("%d",&a);
int m1[a][a];
int i,j;

for(i=0;i<a;i++){
	for(j=0;j<a;j++){
		m1[i][j]=k;
		k++;
	}
}
int z;
for(i=0;i<a;i++){
	for(j=0;j<a;j++){
		if(m1[i]==m1[j])
		printf("%d",m1[i][j]);
		if(i==a-1){
			for(z=1;z<i;z++)printf(" ");
		}
		else for(z=0;z<i;z++)printf(" ");
		
	}
	printf("\n");
}										
	
	
	
	
	
	return 0;
}
