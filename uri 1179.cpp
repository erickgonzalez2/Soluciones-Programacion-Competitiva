#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int numero[15]={'\0'};
	int par[15]={'\0'},impar[15]={'\0'};
	int cp=0,ci=0;
	
	for(int i=0;i<15;i++){
		cin>>numero[i];
	}
	
	for(int i=0;i<15;i++){
		if(numero[i]%2==0){
			par[cp]=numero[i];
			cp++;
		}
		if(numero[i]==0){
			par[cp]='a';
			cp++;
		}
		if(numero[i]%2==1 || numero[i]%2==-1){
			impar[ci]=numero[i];
			ci++;
		}
	}
	int ip=0,im=0;
	
	for(int i=0;i<5;i++){
		if(par[ip]=='\0')break;
		printf("par[%d] = %d\n",i,par[ip]);
		ip++;	
	}
	
	for(int i=0;i<5;i++){
		if(impar[im]=='\0')break;
		printf("impar[%d] = %d\n",i,impar[im]);
		im++;	
	}
	for(int i=5;i<10;i++){
		if(impar[im]=='\0')break;
		printf("impar[%d] = %d\n",i-5,impar[im]);
		im++;	
	}
	
	for(int i=10;i<15;i++){
		if(impar[im]=='\0')break;
		printf("impar[%d] = %d\n",i-10,impar[im]);
		im++;	
	}
	
	for(int i=5;i<10;i++){
		if(par[ip]=='\0')break;
		printf("par[%d] = %d\n",i-5,par[ip]);
		ip++;	
	}
	
	for(int i=10;i<15;i++){
		if(par[ip]=='\0')break;
		printf("par[%d] = %d\n",i-10,par[ip]);
		ip++;	
	}
	
	return 0;
}
