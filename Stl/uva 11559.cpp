#include <iostream>
using namespace std;
int main(){
	long int participants,budget,hotels,weeks;
	long int prize,beed;
	
	while(cin>>participants>>budget>>hotels>>weeks){
		long int min=0;
	
		while(hotels--){
			cin>>prize;
			bool disp=false;
			for(int i=0;i<weeks;i++){
				cin>>beed;
				if(beed>=participants)disp=true;
			}
			if(disp){
				if(min==0||prize<min)min=prize;
			}
		}
		if(participants*min<=budget)cout<<participants*min<<'\n';
		else cout<<"stay home\n";
		
	}
}
