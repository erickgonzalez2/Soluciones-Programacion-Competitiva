#include <stdio.h>
int main(){
	int meses,num;
	scanf("%d",&meses);
	for(int i=0;i<meses;i++){
		scanf("%d",&num);
		if(num==1)printf("Enero\n");
		else if(num==2)printf("Febrero\n");
		else if(num==3)printf("Marzo\n");
		else if(num==4)printf("Abril\n");
		else if(num==5)printf("Mayo\n");
		else if(num==6)printf("Junio\n");
		else if(num==7)printf("Julio\n");
		else if(num==8)printf("Agosto\n");
		else if(num==9)printf("Septiembre\n");
		else if(num==10)printf("Octubre\n");
		else if(num==11)printf("Noviembre\n");
		else if(num==12)printf("Diciembre\n");
		else printf("error\n");
}
return 0;
}

