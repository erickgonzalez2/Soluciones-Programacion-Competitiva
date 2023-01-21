#include <iostream>
#include <list>
using namespace std;

void printList(list<int>l){

    for(list<int>::iterator it=l.begin();it!=l.end();it++ ){
        cout<<*it<<" ";
    }
    cout<<'\n';
}

bool single_digit(const int&value){return(value<10);}
bool is_odd(const int &value){return value%2==1;}
int main()
{
    list<int>aux({7 , 4 , 5  , 7  , 5 , 4 ,3 });
    //list<int>aux({7, 7, 4, 4 , 5 , 5, 3});
    list<int>l({-7,7,7,5,3,-7,1,1});


    l.remove(-7); // Remueve todos los -7
    printList(l);

    l.unique(); // Remueve los elementos repetidos, solo sin son consecutivos
    printList(l);

    l.sort(); //Reordena la lista de menor a mayor
    printList(l);

    list<int>l2({2,0,6,4});
    cout<<"Lista 2 :";printList(l2);

    l2.sort(); //Reordena la lista 2 de menor a mayor
    cout<<"Lista 2 :";printList(l2);

    l.merge(l2); // Une la lista2 con la lista1 y  ordena la lista1 nueva. La lista2 es vaciada
    printList(l);

    l.reverse(); // Invierte el orden de la lista
    printList(l);

    cout<<l2.size()<<'\n'; // Imprime el tamaño, el cual es 0


   
    list<int>l1({3,10,4,21,11,18});
    //list<int>l2({12,14,16});

    l1.remove_if(single_digit); // Remueve todos los valores menores a 10
                                // Resulta en { 10 , 21 , 11 , 18  }

    l1.remove_if(is_odd); // Remueve todos los valores impares
                          // Resulta en { 10, 18}

    list<int>::iterator it = l1.begin(); // Crea un iterador y lo inicializa en la primer posicion
    it++; // Incrementa el iterador en uno. Quedan en la segunda posicion

    l1.splice(it,l2); // Introduce la lista 2, antes de la segunda posicion. La lista 2 queda vacia
    printList(l1);

    return 0;
}

