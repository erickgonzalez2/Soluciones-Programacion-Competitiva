#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int numbers;
	while(cin>>numbers&&numbers){
		
	vector <int>loop;
	int k;	
	
	while(numbers--){
		
		cin>>k;
		loop.push_back(k);
	}
	loop.push_back(loop[0]);
	loop.push_back(loop[1]);
	
	int a;
	int peaks=0;
	a = loop[0];
	
	bool arriba;
	
	
	for(int i=1;i<loop.size();i++){
		
		if(i==1){
		
		if(loop[i]>a){
			arriba=true;
			a = loop[i];
		}
		else if(loop[i]<a){
			arriba=false;
			a = loop[i];
		}
	}
	
		else{
			
			if(loop[i]>a){
				if(arriba)a=loop[i];
				else{
					peaks++;
					arriba=true;
					a = loop[i];
				}
			}
			
			else if(loop[i]<a){
				if(!arriba)a=loop[i];
				else{
					peaks++;
					arriba=false;
					a = loop[i];
				}
			}
			else a=loop[i];
			
		}
		
		
		
		
		
	}
	cout<<peaks<<'\n';
	}
	
	
	
	
}
