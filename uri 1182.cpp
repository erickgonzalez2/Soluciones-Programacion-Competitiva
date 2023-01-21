#include <stdio.h>
int main(){
	double matriz[12][12];
	double suma=0;
	int nm,a;
	char band;
	scanf("%d",&nm);
	scanf("%s",&band);;
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			matriz[i][j]=1;
		}
	}
	if(band=='S'){
		for(int i=0;i<12;i++){
			suma= suma + matriz[i][nm];
		}
	}
	if(band=='M'){
		for(int i=0;i<12;i++){
			suma= suma + matriz[i][nm];
		}
		suma=suma/12;
	}
	printf("%.1lf\n",suma);
}

