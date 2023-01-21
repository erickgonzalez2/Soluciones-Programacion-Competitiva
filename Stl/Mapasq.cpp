#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int>alp;

    for(char a = 65 ; a<='Z'; a++){
        alp.insert(make_pair(a,a)); // Inserta un par de valores al mapa
    }

    for(map<char, int>::iterator it = alp.begin(); it!=alp.end(); it++){
        cout<<it->first<< " "<<it->second; // Imprime el contenido del mapa
        cout<<'\n';
    }

    auto it = alp.find('b'); // Busca una llave dentro del mapa
    if(it!=alp.end()) // Si no se encuentra la llave, se inserta dentro del mapa con un valor
        cout<<"Se encontro la letra"<<'\n';
    else{
        cout<<"No se encontro la letra"<<'\n';
        alp['b']='b';
    }
    alp['a']='b';
    alp.at('a')=alp['b']-1;

    auto it2 = alp.lower_bound('b'); // Busca el valor de la llave dentro del mapa
    cout<< it2->first << " "<<it2->second<<'\n' ;

    alp['d']='d';

    it2=alp.lower_bound('c'); // Si la llave no es encontrada, retorna un iterador al siguiente valor mas grande
    cout<< it2->first << " "<<it2->second<<'\n' ;

    auto it3 = alp.upper_bound('a'); // Encuentra la siguiente llave cuyo valor es mayor
    cout<< it3->first << " "<<it3->second<<'\n' ;


    return 0;
}
