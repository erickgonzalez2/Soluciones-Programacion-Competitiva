#include <bits/stdc++.h>

using namespace std;


int main(){
	
	list <int> lista;
	
	int n,k,m;
	
	while(cin>>n>>k>>m && n && k && m){
	
		for(int i = 1 ; i <= n;i++){
			lista.push_back(i);
		}			
		
		list <int> :: iterator counterClock = lista.begin();
		list <int> :: iterator auxCk = counterClock;
		list <int> :: iterator clock = lista.end(); clock--;
		list <int> :: iterator auxC = clock;
		
		while(true){
						
			for(int i=1;i<k;i++){				
				counterClock++;				
				if(*counterClock == 0)counterClock++;								
			}			
			for(int i=1;i<m;i++){
				clock--;
				if(*clock == 0)clock--;				
			}			
			
			if(*counterClock == *clock && lista.size()>1){
				auxCk = counterClock;
				auxCk++;
				auxC = clock;
				auxC--;
				if(*counterClock>9)cout<<" ";
				else cout<<"  ";
				cout<<*counterClock;
				lista.remove(*counterClock);
				counterClock = auxCk;
				clock = auxC;
				if(*counterClock==0)counterClock++;
				else if(*clock==0)clock--;
				if(lista.empty())break;
				else cout<<",";
			}
			
			else{
			if(*counterClock>9)cout<<" ";
			else cout<<"  ";
			cout<<*counterClock;	
			auxCk = counterClock;
			auxCk ++;									
			lista.remove(*counterClock);
			if(lista.empty())break;
			
			counterClock = auxCk;
			
			if(*counterClock == 0)counterClock++;
			
			if(*clock>9)cout<<" ";
			else cout<<"  ";
			cout<<*clock;
			auxC = clock;
			auxC--;
			if(*counterClock==*clock)counterClock++;
			if(*counterClock==0)counterClock++;
			lista.remove(*clock);
			clock = auxC;
			if(*clock==0)clock--;
			if(lista.empty())break;
			else cout<<",";
			
				
			}
			
			
		}
		cout<<'\n';		
		
		
	}		
}
