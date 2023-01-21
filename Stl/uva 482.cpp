#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	int num;
	bool leer=false;
	string f;
	string x;
	
	cin>>n;
	cin.ignore();
	getline(cin,f);
	while(n--){
		
		
		vector <int> position;
		vector <string> numbers;
		vector<string> order;
		
		if(leer==true){cout<<'\n';cin.ignore(),getline(cin,f);}
		else leer=true;
		
		getline(cin,f);
		
		istringstream iss(f);
		string aux;
		while(iss>>aux){
			num=stoi(aux);
			num--;
			position.push_back(num);
		}
		
		for(int i=0;i<position.size();i++){
			cin>>x;
			numbers.push_back(x);
		}
		
		order.resize(numbers.size());
		
		for(int i=0,j=0;i<position.size(),j<numbers.size();i++,j++){
			order[position[i]]=numbers[j];
		}
		
		for(auto it=order.begin();it!=order.end();it++){
			cout<<*it<<'\n';
		}
	}	
}
