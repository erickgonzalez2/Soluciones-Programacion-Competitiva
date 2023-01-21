#include <iostream>
#include <iomanip>

	using namespace std;
	int main(){
		int c;
		cin>>c;
		float prom[c];
		for(int i=0;i<c;i++){
			int n;
			float pro=0;
			cin>>n;
			float num[n],mayor=0;
			
			for(int j=0;j<n;j++){
				cin>>num[j];
				pro=pro+num[j];
			}
			pro=pro/n;
			
				for(int j=0;j<n;j++){
					if(num[j]>pro){
						mayor++;
					}
			}
			
			mayor=(mayor*100)/n;
			prom[i]=mayor;
			
		}
		for(int i=0;i<c;i++){
			cout<< fixed << setprecision(3)<<prom[i]<<"%"<<'\n';
		}
		return 0;
	}
	
