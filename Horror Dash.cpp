#include <iostream>

using namespace std;

int main(){
	int c,m,n,vm=0;
	cin>>c;
	for( int i=0;i<c;i++){
		cin>>m;
		vm=0;
		for(int j=0;j<m;j++){
			cin>>n;
			if(n>vm){
				vm=n;
			}
		}
		cout << "Case "<< i+1 << ": "<< vm<< '\n';
	}
	return 0;
}
