#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	int x;
	vector <int> numbers;
	
	while(cin>>n){
		
		if(n==0)return 0;
		
		while(n--){
			cin>>x;
			numbers.push_back(x);
		}
		
		int peaks=0;
		bool arriba;
		bool abajo;
		
		if(numbers[0]>numbers[1])abajo=true;
		else if(numbers[0]<numbers[1])arriba=true;
		
		int anterior=numbers[1];
		
		for(int i=2;i<numbers.size();i++){
			
			if(numbers[i]>anterior){
				if(arriba==true){
					anterior=numbers[i];
				}
				else if(abajo==true){
					peaks+=2;
					arriba=true;
					abajo=false;
					anterior=numbers[i];
				}
			}
			
			if(numbers[i]<anterior){
				if(abajo==true){
					anterior=numbers[i];
				}
				else if(arriba==true){
					peaks+=2;
					abajo=true;
					arriba=false;
					anterior=numbers[i];
				}
			}
		}
		
		if(numbers.size()!=2)cout<<peaks<<'\n';
		else cout<<"2\n";
		
		numbers.clear();
		
	}
}
