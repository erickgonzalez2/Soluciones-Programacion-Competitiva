#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	float n,n2,n3,n4,ne,media1;
	cin>>n>>n2>>n3>>n4;
	cin>>ne;
	n=n*2/10;
	n2=n2*3/10;
	n3=n3*4/10;
	n4=n4*1/10;
	media1=n+n2+n3+n4;
	cout<<"Media: "<<trunc(media1*10)/10<<'\n';
	if(media1>=7.0)cout<<"Aluno aprovado."<<'\n';
	else if(media1>= 5.0 && media1<=6.9){
		float mf;
		cout<<"Aluno em exame."<<'\n';

		cout<<"Nota do exame: "<<trunc(ne*10)/10<<'\n';
		if(ne>=5.0)cout<<"Aluno aprovado."<<'\n';
		else if(ne<5.0)cout<<"Aluno reprovado."<<'\n';
		mf=(media1+ne)/2;
		cout<<"Media final: "<<trunc(mf*10)/10<<'\n';
	}
	else cout<<"Aluno reprovado."<<'\n';
	return 0;
}
