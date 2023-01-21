#include <iostream>
#include <algorithm>

using namespace std;

struct pais{
	int no_equipo;
	int gold,silver,bron;
}pais;

bool comp (struct pais ,struct pais);

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	struct pais n[7];
	
	for(int i=0;i<7;i++){
		n[i].no_equipo=i+1;
		cin>>n[i].gold;
		cin>>n[i].silver;
		cin>>n[i].bron;
	}
	
	sort(n,n+7,comp);	
	
	for(int i=0;i<7;i++){
		cout<<"Facultad ";
		cout<<n[i].no_equipo<<" ";
		cout<<n[i].gold<<" ";
		cout<<n[i].silver<<" ";
		cout<<n[i].bron<<"\n";
	}
	return 0;
}


 bool comp (struct pais a, struct pais b){
 	
 	if(a.gold!=b.gold)return a.gold>b.gold;
 	
 		else{
 			if(a.silver!=b.silver)return a.silver>b.silver;
 				
				 else{
				 	if(a.bron!=b.bron)return a.bron>b.bron;
				 		else{
				 			if(a.no_equipo!=b.no_equipo)return a.no_equipo<b.no_equipo;
						 }
				 }
	 	}
	} 
