#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a,b;
	cin>>a>>b;
	
	if(a>b)cout<<"Eu odeio a professora!\n";
	else if(b-a>=3)cout<<"Muito bem! Apresenta antes do Natal!\n";
	else{
		cout<<"Parece o trabalho do meu filho!\n";
		if(b+2>=25)cout<<"Fail! Entao eh nataaaaal!\n";
		else cout<<"TCC Apresentado!\n";
	}
	
	
}
