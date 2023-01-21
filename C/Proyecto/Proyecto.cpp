#include <iostream>
#include <ctype.h>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <ctime>

using namespace std;

int indice = 0;

struct Vehiculo{
	string matricula;	
	string horaEntrada;
	string horaSalida;	
};//Estructura Vehiculo, que es donde se guardaran cada uno de los datos del vehiculo

Vehiculo listaVehiculos[15];//Arreglo de Vehiculos con una capacidad de 15

void imprimirMenu(){
	cout<<"\nBienvenido, elija una opcion\n\n";
	
	cout<<"Opcion 1 :  Registrar Vehiculos\n";
	cout<<"Opcion 2 :  Salida de Vehiculo\n";
	cout<<"Opcion 3 :  Mostrar Vehiculos\n";
	cout<<"Opcion 4 :  Limpiar pantalla\n";
	cout<<"Opcion 5 :  Generar archivo con lista de vehiculos\n";
	cout<<"Opcion 6 :  Ordenar Vehiculos por matricula\n";
	cout<<"Opcion 7 :  Ordenar Vehiculos por orden de llegada\n";
	cout<<"Opcion 8 :  Salir del programa\n\n";
	return;
}//Función que imprime cada una de las opciones del menu

bool validarHora(string hora){ //Funcion que valida la hora recibida en caso de ser ingresada por el usuario
	
	if(hora.length()>5){
		return false;
	}
	
	else if(!isdigit(hora[0]))return false;//Compara que cada uno de los caracteres sea un digito
	else if(!isdigit(hora[1]))return false;
	else if(hora[2]!=':')return false;//Compara que el caracter en la posicion 2 sea un ':'
	else if(!isdigit(hora[3]))return false;
	else if(!isdigit(hora[4]))return false;
	
	else{
		
	string horaV="";
	string minutos="";
	
	horaV+=hora[0];
	horaV+=hora[1];
	
	minutos+=hora[3];
	minutos+=hora[4];
	
	int valor1 = stoi(horaV); 
	int valor2 = stoi(minutos);//Convierte los valores de string a entero;
	
	if(valor1>23 || valor2 > 59)return false;//Verifica que los valores no se pasen del rango establecido para las horas 
											//maximo 23 y para los minutos maximo 59
	
	else return true;		
	}		
}

string obtenerHora(){ //Función que obtiene la hora local en tiempo real del dispositivo
	
	time_t t = time(nullptr);
	
	tm* now = localtime(&t);
	
	char buffer[128];
	
	strftime(buffer,sizeof(buffer),"%X",now);
	
	string tiempo = buffer;
	
	return tiempo;									
	
}

bool validarMatricula(string matricula){//Función que realiza una busqueda secuencial para encontrar una matricula		
										//en caso de encontrarla significa que ya esta registrada y retorna un valor falso
	for(int i=0;i<indice;i++){
		
		if(listaVehiculos[i].matricula==matricula){
			cout<<"\n\n--Error, matricula ya registrada--\n";
			return false;
		}
		
	}
	return true;
	
}

int obtenerMatricula(string matricula){//Función que busca la matricula en el arreglo de Vehiculos y retorna 
										//la posición en la cual se encuentra
	
	for(int i=0;i<indice;i++){
		if(listaVehiculos[i].matricula==matricula){
			return i;
		}
	}
	return -1;
	
}

int obtenerTotal(int indiceMatricula){//Función que obtiene el total del vehiculo aL cual se le registra la salida
	
	int total = 0;
	
	string tiempoEntrada=""; 
	string minutosEntrada = "";
	
	tiempoEntrada+= listaVehiculos[indiceMatricula].horaEntrada[0];
	tiempoEntrada+= listaVehiculos[indiceMatricula].horaEntrada[1];
	minutosEntrada+= listaVehiculos[indiceMatricula].horaEntrada[3];
	minutosEntrada+= listaVehiculos[indiceMatricula].horaEntrada[4];
	
	int valorHoraEntrada = stoi(tiempoEntrada);
	int valorMinutosEntrada= stoi(minutosEntrada);//Convierte los valores de string a enteros
	
	string tiempoSalida=""; 
	string minutosSalida = "";
	
	tiempoSalida+= listaVehiculos[indiceMatricula].horaSalida[0];
	tiempoSalida+= listaVehiculos[indiceMatricula].horaSalida[1];
	minutosSalida+= listaVehiculos[indiceMatricula].horaSalida[3];
	minutosSalida+= listaVehiculos[indiceMatricula].horaSalida[4];
	
	int valorHoraSalida = stoi(tiempoSalida);
	int valorMinutosSalida = stoi(minutosSalida);//Convierte los valores de string a enteros
	
	int totalHoras;
	int totalMedias;
	
	if(listaVehiculos[indiceMatricula].horaEntrada == listaVehiculos[indiceMatricula].horaSalida){
		totalHoras = 24;//Validación en caso de que hayan pasado 24 horas
	}
	else{
		totalHoras = valorHoraSalida-valorHoraEntrada;	//Se obtiene el total de horas del vehiculo
	}
	
	if(totalHoras<0)totalHoras+=24; //En caso de ser negativo se le suman 24 al total de horas
	
	else if(totalHoras==0 && minutosEntrada>minutosSalida)totalHoras+=23;//Valida que hayan pasado menos de 24 horas pero más de 23
	
	totalMedias = valorMinutosSalida-valorMinutosEntrada;//Obtiene el total de minutos restantes
	
	if(totalMedias<0)totalMedias+=60;//Si es menor a 0 se le añade 60 al total de horas
	
	
	if(totalHoras>0){
		total+=25;
		totalHoras--;
		
		total = total + (totalHoras*10);
	
		if(totalMedias>0 && totalMedias<=30)total+=5;
		
		else if(totalMedias>30)total+=10;
		
		totalHoras++;	//Se suma la primer hora y se obtiene el total de horas restantes,junto con los minutos restantes
						//Se cobra como media cuando hay al menos un minuto y cuando supera los 30 se cobra como hora	
	}
	
	else{
		
		if(totalMedias>0 && totalMedias<=30)total+=20;
		
		else if(totalMedias>30)total+=25;//En caso de que el tiempo transcurrido sea menos de una hora
		
	}	
	

	
	cout<<"\nTiempo transcurrido :"<<totalHoras<<" hora(s) con "<<totalMedias<<" minuto(s) \n\n ";//Se imprime el tiempo 
																								//transcurrido
	
	return total;//Se retorna el total a pagar
	
	
}

void removerVehiculo(int indiceMatricula){//Realiza una busqueda secuencial del vehiculo a ser removido, buscando su indice como parametro
	
	listaVehiculos[indiceMatricula].matricula = "";
	listaVehiculos[indiceMatricula].horaEntrada = "";
	listaVehiculos[indiceMatricula].horaSalida = "";
	
	for(int i=indiceMatricula;i<14;i++){
		listaVehiculos[i].matricula = listaVehiculos[i+1].matricula; 
		listaVehiculos[i].horaEntrada = listaVehiculos[i+1].horaEntrada;
		listaVehiculos[i].horaSalida = listaVehiculos[i+1].horaSalida;
	}
	
	indice--;
	
}

void registrarVehiculos(){//Función para registrar nuevos vehiculos
		
	string matriculaRegistrar;	
	
	cout<<"Para salir del registro ingrese \'0\' como matricula\n\n";
	
	while(true){
		
		if(indice==15){ //Valida que el tope de vehiculos haya sido alcanzado
		cout<<"Tope de vehículos alcanzado, favor de registrar salida para ingresar más\n\n";
		return;
		}	
		
		int restantes = 15-indice;//Obtiene cuantos vehiculos restantes se pueden registrar
	
	cout<<"\n\nVehiculos disponibles para registrar : "<<restantes<<"\n\n";
		
		cout<<"Ingrese la matricula\n";
		
		cin>>matriculaRegistrar;
						
		if(matriculaRegistrar=="0"){
			cout<<"\n\nSaliendo del registro de vehiculos...\n\n";
			break;	//Con esta opcion se sale del registro
		}
		
		else{
			if(validarMatricula(matriculaRegistrar)){//Valida que la matricula no haya sido registrada 
													// y en caso de que no lo haya sido, registra un nuevo vehiculo
												
				listaVehiculos[indice].matricula = matriculaRegistrar;
				listaVehiculos[indice].horaEntrada = obtenerHora();
				
				string mostrarHora = "";
				
				mostrarHora += listaVehiculos[indice].horaEntrada[0];
				mostrarHora += listaVehiculos[indice].horaEntrada[1];
				mostrarHora += listaVehiculos[indice].horaEntrada[2];
				mostrarHora += listaVehiculos[indice].horaEntrada[3];
				mostrarHora += listaVehiculos[indice].horaEntrada[4];
				
				indice++;//Aumenta el indice de vehiculos registrados
				
				cout<<"\n\n--Vehiculo registrado con la matricula: \'"<<matriculaRegistrar<<"\' en la hora: \'"<<mostrarHora<<"\'--";
				
			}										
														
		}
		
		
	}
}

void registrarSalida(){//Funcion para registrar la salida de un vehiculo
	
	cout<<"Ingrese la matricula del vehiculo para registrar su salida\n\n";
	
	string matriculaSalida;
	string horaSalida;
	
	cin>>matriculaSalida;
	
	horaSalida = obtenerHora();
	
	int valor = obtenerMatricula(matriculaSalida);//Obtiene el indice de la matricula que se registrara su salida
	
	if(valor==-1){
		cout<<"\n--Error, la matricula no esta registrada--\n";
	}//En caso de que no se encuentre la matricula
	
	else{								
			
			listaVehiculos[valor].horaSalida = horaSalida;
			
			int totalPagar = obtenerTotal(valor);//Obtiene el total a pagar
			
			removerVehiculo(valor);//Quita el vehiculo del indice dado
			
			cout<<"Total a pagar : $"<<totalPagar<<".00\n\n";//Muestra en pantalla el total a pagar
		
	}
}

void mostrarVehiculos(int v){ //Función recursiva que muestra la lista de vehiculos registrados
	
	if(v>indice)return;
	
	
	
	cout<<"\nVehiculo No: "<<v<<'\n';
	cout<<"Matricula : "<<listaVehiculos[v-1].matricula<<'\n';
	cout<<"Hora de entrada : "<<listaVehiculos[v-1].horaEntrada<<'\n';
	
	mostrarVehiculos(v+1);
			
	
}

void generarArchivo(){//Función que nos genera un archivo txt con los vehiculos registrados.
	
	if(indice==0){
		cout<<"\n\nNingun vehiculo registrado  \n\n";//En caso de que no haya vehiculos registrados lanza este mensaje
	}
	
	else{
		ofstream file;
    	file.open("listaVehiculos.txt");
  		  				
		file<<"Mostrando lista de vehiculos registrados : \n\n";
	
	for(int i=0;i<indice;i++){
		file<<"\nVehiculo No: "<<i+1<<'\n';
		file<<"Matricula : "<<listaVehiculos[i].matricula<<'\n';
		file<<"Hora de entrada : "<<listaVehiculos[i].horaEntrada<<'\n';
	}
	
	file.close();
	
	cout<<"--Archivo generado--\n\n";//Nos avisa que el archivo fue generado correctamente
		
	}
			
}

bool compare(Vehiculo a,Vehiculo b){//Compara el valor de dos vehiculos
	
	return (a.matricula<b.matricula);//Compara el valor de sus matriculas y retorna la de menor valor
	
}

bool compareHora(Vehiculo a,Vehiculo b){ //Función que compara la hora de entrada de dos vehiculos
	return (a.horaEntrada<b.horaEntrada);
}

void ordenarAlpha(){//Funcion que ordena los vehiculos por el orden alfabetico de sus matriculas
		
	if(indice==0){
		cout<<"Ningun vehiculo registrado\n\n";//Imprime este mensaje en caso de que no haya ningun vehiculo registrado
		return;
	}
	else if(indice==1){
		cout<<"Se necesitan al menos dos vehiculos\n\n";//Imprime este mensaje en caso de que haya menos de dos vehiculos
		return;
	}		
	
		
	sort(listaVehiculos,listaVehiculos+indice,compare);//Funcion que ordena los vehiculos por el valor de su matricula
	
	cout<<"Vehiculos ordenados por matricula en orden alfabetico\n\n";//Nos avisa que los vehiculos han sido ordenados correctamente
																	//Para ver el orden hay que ejecutar la opcion de mostrar vehiculos desde el menu principal
	
}


void ordenarHora(){//Ordena los vehiculos por el valor de su hora de entrada
	
	if(indice==0){
		cout<<"Ningun vehiculo registrado\n\n";//Imprime este mensaje en caso de que no haya ningun vehiculo registrado
		return;
	}
	else if(indice==1){
		cout<<"Se necesitan al menos dos vehiculos\n\n";//Imprime este mensaje en caso de que haya menos de dos vehiculos
		return;
	}		
	
		
	sort(listaVehiculos,listaVehiculos+indice,compareHora);//Funcion que compara los vehiculos por su hora de entrada y los ordena
	
	cout<<"Vehiculos ordenados por hora de llegada\n\n";//Nos avisa que los vehiculos han sido ordenados correctamente
																	//Para ver el orden hay que ejecutar la opcion de mostrar vehiculos desde el menu principal
	
}

int main(){//Metodo principal del programa
	
	cout<<"--------CONTROL DE ESTACIONAMIENTO----------\n\n";
	
	imprimirMenu();//Se llama a imprimir el menu de opciones
	
	string opcion;
	
	
	cin>>opcion;
	
	while(opcion!="8"){ //Desde aquí verificamos que opción se elige
				
			
			if(opcion=="1"){
				registrarVehiculos();//Funcion para registrar vehiculos				
			}	
			
			else if(opcion=="2"){
				registrarSalida();//Funcion para registrar salida de vehiculos
			}
			else if(opcion=="3"){
				if(indice==0){
				cout<<"\n\nNingun vehiculo registrado  \n\n";//En caso de no tener ningun vehiculo registrado se imprime este mensaje
			}
	
			else{
				cout<<"Mostrando lista de vehiculos registrados : \n\n";
				mostrarVehiculos(1);//Funcion para mostrar la lista de vehiculos
				
			}
		}
		
		else if(opcion=="4"){
				system("cls");	//Limpia la pantalla			
			}
			
		else if(opcion=="5"){
				generarArchivo();//Funcion que nos genera el archivo
			}
			
		else if(opcion=="6"){
				ordenarAlpha();//Ordena por orden alfabetico los vehiculos en base a su matricula
			}
			
		else if(opcion=="7"){
				ordenarHora();//Ordena los vehiculos por su orden de entrada
			}			
		
		else if(opcion=="8"){
				return 0;//Salida del programa 
			}	
		else{
			cout<<"\n\nOpcion invalida, seleccione una opcion disponible\n\n";//En caso de que no se de ninguna opcion valida
		}			
																	
		
		imprimirMenu();
		
		cin>>opcion;//Desde aqui el usuario puede nuevamente ingresar una opcion;
		
		
	}
	
}
