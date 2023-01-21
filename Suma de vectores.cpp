	#include <iostream>
	using namespace std;
	int main(){
		int num;
		cin>>num;
		int n[num],o[num];
		for(int i=0;i<num;i++){
			cin>>n[i];
		}
		for(int i=0;i<num;i++){
			cin>>o[i];
		}
		
		for(int i=0;i<num;i++){
			cout<<n[i]+o[i]<<" ";
		}
		return 0;
	}
