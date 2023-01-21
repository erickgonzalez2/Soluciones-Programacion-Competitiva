//Linked List

#include <iostream>
using namespace std;

typedef struct Node{
	int data;
	struct Node* next;
}NODO;

NODO* NewNode(int data);

int main(){
	
	NODO* nuevo;
	nuevo = NewNode(5);
	cout<<nuevo->data;
	
	
	return 0;
}

NODO* NewNode(int data){
	NODO *nuevo;
	nuevo = (NODO*)malloc(sizeof(NODO));
	
	if(nuevo!=NULL){
		nuevo->data = data;
		nuevo->next = NULL;
	}
	
	return nuevo;
}

