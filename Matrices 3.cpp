#include <iostream>
using namespace std;
int main(){
	int f,c,g=0,sumF=0;
	cin>>f>>c;
	int sumfil[f]={0};
	
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cin>>g;
			sumF=sumF+g;
		}
			sumfil[i]=sumF;
			sumF=0;
	}
	for(int k=0;k<f;k++){
	cout<<sumfil[k]<<',';
}
	return 0;
}
