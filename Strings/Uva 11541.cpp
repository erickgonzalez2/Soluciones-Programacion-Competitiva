#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,i=1,z;
	string a;
	string b;
	cin>>n;
	while(n--){
			cin>>a;
			b=" ";
			for(int j=0;j<a.length();j++){
				switch(a[j]){
					case '1':
						b+= a[j-1];
						break;
						
					case '2':
						for(z=0;z<2;z++)b+= a[j-1];
						break;
						
					case '3':
						for(z=0;z<3;z++)b+= a[j-1];
						break;
						
					case '4':
						for(z=0;z<4;z++)b+= a[j-1];
						break;
						
					case '5':
						for(z=0;z<5;z++)b+= a[j-1];
						break;
						
					case '6':
						for(z=0;z<6;z++)b+= a[j-1];
						break;
						
					case '7':
						for(z=0;z<7;z++)b+= a[j-1];
						break;
						
					case '8':
						for(z=0;z<8;z++)b+= a[j-1];
						break;
						
					case '9':
						for(z=0;z<9;z++)b+= a[j-1];
						break;		
				}
		}
			b.erase(0,1);
				cout<<"Case "<<i<<": "<<b<<'\n';
				i++;
	}
	return 0;	
}
