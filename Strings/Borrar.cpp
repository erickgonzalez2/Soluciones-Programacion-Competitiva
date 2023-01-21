#include <iostream>
#include <string>
using namespace std;

int main(){
	string str(":((( Hello,, World!!?!"); 
	str.erase(19, 3);//borrar desde una posicion, num de caracteres
	string :: iterator it1= str.begin()+10; // iterador para recorrer a partir de n+1= posicion 11;
	str.erase(it1);//borra posicion del iterador;
	string :: iterator it2= str.begin();//inicializa iterador;
	string :: iterator it3= str.begin()+5;
	str.erase(it2,it3);
	cout<<str<<'\n';
	return 0;
}
