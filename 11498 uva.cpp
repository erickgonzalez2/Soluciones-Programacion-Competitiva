#include <iostream>
using namespace std;
int main(){
	int nc,pd1,pd2,c1,c2;
	cin>>nc;
	while(nc!=0){
		if(nc==0)break;
		cin>>pd1>>pd2;
		for(int i=0;i<nc;i++){
			cin>>c1>>c2;
			if(c1==pd1 || c2==pd2)cout<<"divisa\n";
			else if(c1>pd1 && c2>pd2)cout<<"NE\n";
			else if(c1<pd1 && c2>pd2)cout<<"NO\n";
			else if(c1>pd1 && c2<pd2)cout<<"SE\n";
			else if(c1<pd1 && c2<pd2)cout<<"SO\n";
		}
		cin>>nc;
	}
	return 0;
}
