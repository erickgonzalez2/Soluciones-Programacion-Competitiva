#include <bits/stdc++.h>
using namespace std;
int main(){
	string infija;
	cin>>infija;
	string prefija="";
	string polaca="";
	int longitud= infija.length();
	char pila[longitud];
	int i;
	int tope=-1;
	int precedencia[longitud];
	int precedencia_sola;	
	int j;
	int limt;	
	for(i=longitud-1;i>=0;i--){		
		if(infija[i]!=')'&& infija[i]!='(' && infija[i]!='^' && infija[i]!='*' && infija[i]!='/' && infija[i]!='+' && infija[i]!='-'){
			prefija+=infija[i];
		}		
		else {		
			if(infija[i]==')'){
				tope++;
				pila[tope]=infija[i];
				precedencia[tope]=0;
			}
			else if(infija[i]=='^'){
				tope++;
				pila[tope]=infija[i];
				precedencia[tope]=3;
			}			
			else if(infija[i]=='*'){
				precedencia_sola=2;	
				if(tope==-1){
						tope++;
						pila[tope]=infija[i];
						precedencia[tope]=2;
				}
					else if(precedencia[tope]>precedencia_sola){
						prefija+=pila[tope];
						pila[tope]=infija[i];
						precedencia[tope]=2;
					}
					else{
						tope++;
						pila[tope]=infija[i];
						precedencia[tope]=2;
					}
			}
			else if(infija[i]=='/'){
				precedencia_sola=2;	
					if(tope==-1){
						tope++;
						pila[tope]=infija[i];
						precedencia[tope]=2;
				}	
					else if(precedencia[tope]>precedencia_sola){
						prefija+=pila[tope];
						pila[tope]=infija[i];
						precedencia[tope]=2;
					}
					else {
						tope++;
						pila[tope]=infija[i];
						precedencia[tope]=2;
					}
			}
			else if(infija[i]=='+'){
				precedencia_sola=1;
				if(tope==-1){
						tope++;
						pila[tope]=infija[i];
						precedencia[tope]=1;
				}
					else if(precedencia[tope]>precedencia_sola){
						prefija+=pila[tope];
						pila[tope]=infija[i];
						precedencia[tope]=1;
					}
					else {
						tope++;
						pila[tope]=infija[i];
						precedencia[tope]=1;
					}
			}
			else if(infija[i]=='-'){
				precedencia_sola=1;
				if(tope==-1){
						tope++;
						pila[tope]=infija[i];
						precedencia[tope]=1;
				}
					else if(precedencia[tope]>precedencia_sola){
						prefija+=pila[tope];
						pila[tope]=infija[i];
						precedencia[tope]=1;
					}
					else {
						tope++;
						pila[tope]=infija[i];
						precedencia[tope]=1;
					}
			}
			else if(infija[i]=='('){
				limt=tope;
				for(j=limt;j>=0;j--){
					if(pila[j]!=')'){
						prefija+=pila[j];
						pila[j]='\0';
						precedencia[j]=0;
						tope--;
					}
					else {
						pila[j]='\0';
						tope--;
						break;
					}
				}
			}		
		}	
	}
	for(i=tope;i>=0;i--){
		
		if(pila[i]!=')')prefija+=pila[i];
	}
	for(i=prefija.length()-1;i>=0;i--){
		polaca+=prefija[i];
	}
	cout<<polaca;
}
