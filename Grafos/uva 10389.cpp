#include <bits/stdc++.h>
using namespace std;

double walk = 10000.0/60.0;
double subway = 40000.0/60.0;

vector < vector <pair <int, double > > > grafo;
vector <pair <pair <double,double>,int>> coordenadas;
vector <double> dist;

int main(){
	int casos;
	double x,y;
	int identificador = 0;
	string str;
	
	cin >> casos;
	
	cin.ignore();
	getline(cin,str);
	
	while(casos--){
	
	cin>> x >> y;
	coordenadas.push_back(make_pair(make_pair(x,y),identificador));
	
	identificador++;
	
	cin>> x >> y;
	coordenadas.push_back(make_pair(make_pair(x,y),identificador));
	
	identificador++;
	
		cin.ignore();
		while(getline(cin,str) && str[0]!='\0'){
			
			istringstream iss (str);
			
			while(iss>>x && iss>>y){
				
				if(x!=-1 && y!=-1){
					coordenadas.push_back(make_pair(make_pair(x,y),identificador));
				}
				
				else identificador++;
			}
		}
		
	//Construccion del grafo
	
	double distancia;
	double min;
	int id_a,id_b;
	double x1,x2,y1,y2;
	
	grafo.assign((int)coordenadas.size(),vector <pair<int,double>>());
	
	for(int i=0;i<coordenadas.size();i++){
		
			id_a = coordenadas[i].second;
			x1 = coordenadas[i].first.first;
			y1 = coordenadas[i].first.second;
			
		for(int j=0 ; j<coordenadas.size();j++){
			if(i!=j){
				
				
				id_b = coordenadas[j].second;
				
				x2 = coordenadas[j].first.first;
				y2 = coordenadas[j].first.second;				
				distancia = sqrt( pow(x2-x1,2.0)+ pow (y2-y1,2.0));
				
				if(id_a!=id_b) min = distancia/walk;
				
				else min = distancia/subway;
				
				grafo[i].push_back(make_pair(j,min));
				
			}
		}
	}
	
	//Djikstra
	
	dist.assign((int)grafo.size(),1000000);
	dist[0]=0;
	
	priority_queue<pair<double,int>, vector <pair<double,int>>,greater <pair<double,int > > >pq;
	pq.push(make_pair(0,0));
		
	while(!pq.empty()){
		
		pair<double,int> front = pq.top();pq.pop();
		double d = front.first;
		int u = front.second;
		if(d > dist[u])continue;
		for(int j = 0;j< (int)grafo[u].size();j++){
			pair<int,double> v = grafo[u][j];
			if(dist[u] + v.second < dist[v.first]){
				dist[v.first] = dist[u]+v.second;
				pq.push(make_pair(dist[v.first],v.first));
			}
		}
	}
	cout << fixed << setprecision(0)<<dist[1]<<'\n';
	//
		coordenadas.clear();
	grafo.clear();
	dist.clear();	
	identificador = 0;	
		
		
	if(casos)cout<<'\n';

	}
	
}
