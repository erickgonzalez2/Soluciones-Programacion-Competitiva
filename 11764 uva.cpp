#include <iostream>
using namespace std;
int main(){
	int n,nm,m,ant=0,hi=0,low=0,i,c=1;
	cin>>n;
	while(n--){
		cin>>nm;
		for(i=0;i<nm;i++){
			cin>>m;
			if(i==0)ant=m;
			if(m>ant)hi++;
			else if(m<ant)low++;
			ant=m;
		}
		cout<<"Case "<<c<<": "<<hi<<" "<<low<<'\n';
		c++;
		hi=0;
		low=0;
	}
}
