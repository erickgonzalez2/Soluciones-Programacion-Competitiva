	#include <iostream>
	using namespace std;
	int main(){
		int num;
		cin>>num;
		int vec[num];
		for(int i=0;i<num;i++){
			cin>>vec[i];
		}
	
		int busq,band;
		cin>>busq;
		
		for(int i=0;i<num;i++){
			if(vec[i]==busq){
				band=1;
				break;
			}
		}
		if(band==1)cout<<"SI";
		else cout<<"NO";
		
		return 0;
	}
