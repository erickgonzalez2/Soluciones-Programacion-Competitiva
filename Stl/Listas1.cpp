#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l){

    for(list<int>::iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void printListBackwards(list<int>l){

    for(list<int>:: reverse_iterator rit = l.rbegin();rit!=l.rend();rit++){
        cout<<*rit<<" ";
    }
    cout<<endl;
}

int main()
{

    list<int>l({5,4,3,2}); //Inicializa la lista con valores
    l.assign({1,2,3}); //Reasigna a la lista otros valores, borrando los anteriores
    printList(l);

    l.push_front(-3); //Agrega un elemento al principio
    printList(l);

    l.push_back(9); //Agrega un elemento al final
    printList(l);

    list<int>::iterator it = l.begin(),it2; //Crea dos iteradores. Inicializa el iterador "it" con la primer posicion
                                            // de la lista

    l.insert(++it,{0,-5,8}); // Incrementa el iterador "it2" en uno antes de insertar una sublista
                             //Inserta una sublista antes de la posicion del iterador "it2"
    printList(l);

    l.pop_front();l.pop_back(); // Elimina el primer y ultimo elemento de la lista
    printList(l);

    it2=l.begin(); it2++; // Inicializa el iterador "it2" con la primer posicion de la lista y lo incrementa

    l.erase(it2,it); // Borra los elementos en el rango, desde el iterador "it2" incluyendolo, hasta el elemento
                     // Antes de it
    printList(l);

    cout<<l.front()<<endl; //Imprime el primer elemento
    cout<<l.back()<<endl; //Imprime el ultimo elemento
    printListBackwards(l); // Imprime la lista alreves

    l.resize(3); // Reasigna el tamaño de la lista a 3, quitando los sobrantes despues de la tercer posicion
    printList(l);

    l.resize(5); // Reasigna el tamaño de la lista a 5,llenando los espacios vacios con 0s

    printList(l);

    l.clear(); // Borra todos los elementos de la lista lista

    if(l.empty())
        cout<<"La lista esta vacia"<<'\n';


    return 0;
}

