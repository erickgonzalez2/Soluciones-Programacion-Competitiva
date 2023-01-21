#include <stdio.h>
int main(){
	int a[5],i,j;
	int mayor;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
for (i=0;i<5;i++)
{
for (j=0;j<5-i;j++)
{
if (a[j]>=a[j+1])
{
mayor=a[j];
a[j]=a[j+1];
a[j+1]=mayor;
}
}
}
	
	for(i=5;i>=0;i--){
		if(a[i]%2==1){
			printf("%d",a[i]);
			return 0;
		}
	}
}
