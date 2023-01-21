#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;
int main(){
	long double m,n,potencia;
	cin>>m>>n;
	potencia=pow(m,n);
	cout<<fixed<<potencia<<'\n';
	return 0;
}
