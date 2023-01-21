#include <iostream>
using namespace std;
int main(){
	string s0;
	cin>>s0;
	if(s0=="vertebrado"){
		cin>>s0;
		
		if(s0=="ave"){
			cin>>s0;
			if(s0=="carnivoro")printf("aguia\n");
			else if(s0=="onivoro")printf("pomba\n");
		}
		
		else if(s0=="mamifero"){
			cin>>s0;
			if(s0=="onivoro")printf("homem\n");
			else if(s0=="herbivoro")printf("vaca\n");
		}
		
	}
	
	else if(s0=="invertebrado"){
		cin>>s0;
		
		if(s0=="inseto"){
			cin>>s0;
			if(s0=="hematofago")printf("pulga\n");
			else if(s0=="herbivoro")printf("lagarta\n");
		}
		
		else if(s0=="anelideo"){
			cin>>s0;
			if(s0=="hematofago")printf("sanguessuga\n");
			else if(s0=="onivoro")printf("minhoca\n");
		}
	}
	return 0;
}
