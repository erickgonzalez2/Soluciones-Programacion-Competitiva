#include <iostream>
#include <utility>
using namespace std;
int main(){
	float a,b;
	cin>>a>>b;
	pair <float, double> par (a,b);
	cout<<par.first<<" "<<par.second;
}
