#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	int A=0,H=0,E=0,M=0,X=0;
	string c;
	char l;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c;cin>>l;
		if(l=='A')A++;
		else if(l=='H')H++;
		else if(l=='E')E++;
		else if(l=='M')M++;
		else if(l=='X')X++;
	}
	printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)\n",X,H,E,A,M);
	return 0;
}

