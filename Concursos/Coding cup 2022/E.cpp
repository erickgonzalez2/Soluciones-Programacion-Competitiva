#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	string str;
	map<int,int>fechas;
	
	fechas.insert(make_pair(1,0));
	fechas.insert(make_pair(2,0));
	fechas.insert(make_pair(3,0));
	fechas.insert(make_pair(4,0));
	fechas.insert(make_pair(5,0));
	fechas.insert(make_pair(6,0));
	fechas.insert(make_pair(7,0));
	fechas.insert(make_pair(8,0));
	fechas.insert(make_pair(9,0));
	fechas.insert(make_pair(10,0));
	fechas.insert(make_pair(11,0));
	fechas.insert(make_pair(12,0));
	

	int mes;
	string k;
	
	for(int i=0;i<15;i++){
		
		k ="";
		cin>>str;
		k += str[5];
		k+= str[6];
		mes =stoi(k);
		auto it = fechas.find(mes);
		it->second++;			
		}		
	
	
	for(auto j = fechas.begin();j!=fechas.end();j++){
		int x = j->first;
		switch(x){
			case 1:
				cout<<"ENERO "<<j->second<<"\n";
				break;
			case 2:
				cout<<"FEBRERO "<<j->second<<"\n";
				break;
			case 3:
				cout<<"MARZO "<<j->second<<"\n";
				break;
			case 4:
				cout<<"ABRIL "<<j->second<<"\n";
				break;
			case 5:
				cout<<"MAYO "<<j->second<<"\n";
				break;
			case 6:
				cout<<"JUNIO "<<j->second<<"\n";
				break;
			case 7:
				cout<<"JULIO "<<j->second<<"\n";
				break;
			case 8:
				cout<<"AGOSTO "<<j->second<<"\n";
				break;
			case 9:
				cout<<"SEPTIEMBRE "<<j->second<<"\n";
				break;
			case 10:
				cout<<"OCTUBRE "<<j->second<<"\n";
				break;
			case 11:
				cout<<"NOVIEMBRE "<<j->second<<"\n";
				break;
			case 12:
				cout<<"DICIEMBRE "<<j->second<<"\n";
				break;
		}
		
	}
	}

