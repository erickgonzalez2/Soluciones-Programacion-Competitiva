#include <iostream>
using namespace std;
int main(){
	
	long int n,b,h,w;
	
	while(cin>>n>>b>>h>>w){
		
		int min=0;
		int beds;
		int sumb;
		int prize;
		
		while(h--){
			cin>>prize;
			sumb=0;
			for(int i=0;i<w;i++){
				cin>>beds;
				sumb+=beds;
			}
			sumb=sumb/w;
			if(sumb>=w){
				if(n*prize<=b){
					if(min!=0){
						if(n*prize<min)min=n*prize;
					}
					else{
						min=n*prize;
					}
				}
			}
		}
		if(min==0){
			cout<<"stay home\n";
		}
		else cout<<min<<'\n';	
	}
}
