#include <bits/stdc++.h>
using namespace std;

struct Book{
	string author;
	string title;
};

bool compareB(Book a, Book b){
	
	if(a.author!=b.author){
		return a.author<b.author;
	}
	
	else{
		return a.title<b.title;
	}
	
}

int main(){
	
	string str;
	string aut,ttl;
	
	list <Book> books;
	Book datos;
	
	while(getline(cin,str) && str!="END"){
		
		int i = 1;
		aut = "";
		ttl = "";
		
		
		while(str[i]!='"'){
			ttl+=str[i];
			i++;
			
		}
		
		i+= 5; 
		
		while(i!=str.size()){
			aut+=str[i];
			i++;
			
		}
		
		datos.author = aut;
		datos.title = ttl;
		
		books.push_back(datos);
	}
	
	books.sort(compareB);
	string instruccion;
	string lib;
	
	while(getline(cin,str) && str!="END"){
		
		list <Book>borrows;
		list <Book>returneds;
		
		instruccion = "";
		lib = "";
		
		for(int j = 0; j<6; j++){
			
			instruccion+=str[j];
			
		}
		
		for(int k = 8; k<str.size()-1;k++){
			lib+=str[k];	
		}
		
		
		list <Book>::iterator itr;
		
		
		if(instruccion=="BORROW"){
			
			for(auto it = books.begin(); it!= books.end();it++){
				
				if(it->title == lib){
					itr = it;
					break;
				}
			}
			
			datos = *itr;
			
			books.remove(datos);
			borrows.push_back(*itr);
			
			if(!returneds.empty()){
				returneds.erase(itr);
			}
			
			
		}
		
		else if(instruccion == "RETURN"){
			
			for(auto it = borrows.begin(); it!= borrows.end();it++){
				
				if(it->title == lib){
					itr = it;
					break;
				}
			}
			
			borrows.erase(itr);
			books.push_back(*itr);
			returneds.push_back(*itr);	
		}
		
		else if(instruccion == "SHELVE"){
			
			books.sort(compareB);
			
			for(auto it = returneds.begin();it!=returneds.end();it++){
				
				for(auto ite = books.begin(); ite!= books.end();ite++){
					
					if(it==ite){
						
						if(ite==books.begin()){
							
							cout<<"Put \""<<ite->title<<"\" first\n";
							break;
						}
						
						else{
							
							cout<<"Put \""<<ite->title<<"\" after \""<<ite--->title<<"\"\n";
							break;
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	
	
	
	
}
