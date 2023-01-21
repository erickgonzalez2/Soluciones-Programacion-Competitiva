#include <bits/stdc++.h>
using namespace std;

struct datos{
	
	int idEmpleado ;
 string nombre ;
string apellidoMaterno ;
string apellidoPaterno ;
 string telefono ;
string direccion ;
string email ;
string puesto;
 int edad ;
};


int main(){
	
	struct datos producto[10] ;
	
	for(int i = 0;i<10;i++){
		
		cin>>producto[i].idEmpleado;
		cin>>producto[i].nombre;
		cin>>producto[i].apellidoPaterno;
		cin>>producto[i].apellidoMaterno;
		cin>>producto[i].telefono;
		cin.ignore();
		getline(cin,producto[i].direccion);
		cin>>producto[i].email;
		cin>>producto[i].puesto;
		cin>>producto[i].edad;

	}
	
	for(int i=0;i<10;i++){
		
		cout<<"insert into producto values ("<<producto[i].idEmpleado<<", \'"<<producto[i].nombre<<"\', "<<", \'"<<producto[i].apellidoPaterno<<"\', "<<", \'"<<producto[i].apellidoMaterno<<"\', "<<", \'"<<producto[i].telefono<<"\', "<<producto[i].direccion<<"\', "<<", \'"<<producto[i].email<<"\', "<<", \'"<<producto[i].puesto<<"\', "<<producto[i].edad<<");";
		cout<<"\n";
		
	}
	
} 
