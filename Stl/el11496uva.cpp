#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
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
		
		if(numbers[numbers.size()-1]>numbers[0]){
			abajo=true;
			arriba=false;
		}
		else {
			arriba=true;
			abajo=false;
		}
		
		
		
		for (int i=1; i<numbers.size(); i++)
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
		
		if(peaks%2==1)peaks++;
		cout<<peaks<<'\n';
		numbers.clear();
	}
}
