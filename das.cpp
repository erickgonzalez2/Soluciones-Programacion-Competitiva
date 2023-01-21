#include <bits/stdc++.h> 
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int sim=1;
	int in,gr;
	int inter=0,gremio=0,em=0;
	int np=0;
	
	
	while(sim!=2){
		
		cin>>in>>gr;
			
		np++;
		if(in>gr)inter++;
		else if(gr>in)gremio++;
		else em++;
		
		cout<<"Novo grenal (1-sim 2-nao)\n";
		
		cin>>sim;
		
	}
	cout<<np<<" grenais\n";
	cout<<"Inter:"<<inter<<'\n';
	cout<<"Gremio:"<<gremio<<'\n';
	cout<<"Empates:"<<em<<'\n';
	if(inter>gremio)cout<<"Inter venceu mais\n";
	else if(gremio>inter)cout<<"Gremio venceu mais\n";
	else cout<<"Nao houve vencedor\n";
	
	
	
}
