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
		
		int anterior=numbers[0];
		
		for (int i=1; i<=numbers.size(); i++)
            if (numbers[i-1]<numbers[i] && abajo==true) {
                peaks++;
                abajo=false; 
				arriba=true;
            }
            else if (numbers[i-1]>numbers[i] && arriba==true) {
                peaks++;
                arriba=false;
                abajo=true;
            }
		
		cout<<peaks<<'\n';
		
		numbers.clear();
		
	}
}
