#include <stdio.h>

int main()
{
    int n,i,j,m,limite=0;
    scanf("%d %d",&n,&m);
    limite=n*m;
    int matriza[limite];
    for(i=0;i<limite;i++){
        scanf("%d",&matriza[i]);
    }
    limite=0;
    int r,c;
    scanf("%d %d",&r,&c);
    limite=r*c;
    int matrizb[limite];

    for(i=0;i<limite;i++){
    scanf("%d",&matrizb[i]);
    }
    if(r*c==n*m){
    for(i=0;i<limite;i++){
        for(j=0;j<limite;j++){
            printf("%d ",matriza[i]* matrizb[j]);
        }
        printf("\n");
    }
}
	else{
		printf("The matrices can not be multiplied");
	}

    return 0;
}
