#include <bits/stdc++.h>

using namespace std;

int x,y;
char orientation;
pair<int,int> pos;
set <pair<int,pair<int,char>>> losted;

void right(){
	
	if(orientation = 'N')orientation = 'E';
	else if(orientation = 'E')orientation = 'S';
	else if(orientation = 'S')orientation = 'O';
	else if (orientation = 'O')orientation = 'N';
	
}

void left(){
	if(orientation = 'N')orientation = 'O';
	else if(orientation = 'E')orientation = 'N';
	else if(orientation = 'S')orientation = 'E';
	else if (orientation = 'O')orientation = 'S';
}

void foward(){
	
	pair<int,pair<int,char>> search;
	
	search.first = pos.first;
	search.second.first = pos.second;
	search.second.second = orientation;
	
	auto it = losted.find(search);
	
	if(it==losted.end()){

	
	if(orientation = 'N'){
		pos.second+=1;
	}
	else if(orientation = 'S'){
		pos.second-=1;
	}
	
	else if(orientation = 'O'){
		pos.first-=1;
	}
	
	else if(orientation = 'E'){
		pos.first+=1;
	}
	
	}
}

/*bool isLosted(int a , int b){
	
	if(pos.first > a || pos.first< 0){
		
	}
	
	else if(pos.second > b || pos.second < 0) return true;
	
	else return false;
}*/


int main(){
	
 	int limx, limy;
 	
 	cin>>limx>>limy;
 	
 	
 	
 	while(cin>>x>>y>>orientation){
 		
 		
 		
 		

 		
 		pos.first = x;
 		pos.second = y;
 		
 		string instruccion;
 		
 		
 		
 		cin>>instruccion;
 		
 		bool l; 
 		
 		for(int i = 0 ; i< instruccion.size(); i++){
 			
			l = false;
			 	
			 	
 			switch (instruccion [i]){
 				
 				
 				
 				case 'R':
 					right();	
 					break;
 					
 				case 'L':
 					left();
 					break;
 					
 				case 'F':
 					foward();
 					break;
			 }
			 
			//l = isLosted();
 			
 		/*	if(isLosted){
 				losted.insert({pos.first,{pos.second,orientation}});
 				break;
			 }*/
		 }
		 
		 if(l){
		 	cout<<pos.first<<" "<<pos.second<<" "<<orientation<<" LOST"<<'\n';
		 }
		 
		 else{
		 	cout<<pos.first<<" "<<pos.second<<" "<<orientation<<'\n';
		 }
 		
 		
 		
	 }

	
	
}
