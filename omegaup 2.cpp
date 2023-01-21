#include <bits/stdc++.h>

using namespace std;


int main(){
	
	
	int a,c,m,x0;
	
	cin>>a>>c>>m>>x0;
	ios_base::sync_with_stdio(false);cin.tie(0);
	
	
	int total = 1;
	int once = 0;
	int rep = 0;
	
	map<int,int> numbers;
	map<int,int> :: iterator busqueda;
	numbers.insert({x0,1});
	
	int aux = x0;
	bool alone = false;
	bool ext = false;
	
	while(rep!= m){
		x0 = ((a*x0)+c)%m;
		if(x0==aux){
			ext = true;
			rep++;
			break;
		}
		
		else{
			aux = x0;
			busqueda = numbers.find(x0);
			if(busqueda==numbers.end()){
				if(!alone){
					total++;
					numbers.insert({x0,1});
				}
				else once++;
				
				
			}
			else{
				if(!alone)alone = true;
				rep++;
				if(rep==total)break;
			}
			
		}
		
	}
	
	if(ext)once = total-rep;
	
	if(total==m)cout<<"YES ";
	else cout<<"NO ";
	
	cout<<total<<" "<<once<<" "<<rep<<'\n';
	
	
}
