#include <iostream>

namespace Math{
	int sqr(int x){return x * x;}
	int cube(int x){return x * x * x;}
}

using Math::sqr;
using namespace std;
int main(){
	int a = sqr(5);
	int b = Math::cube(5);
	cout<<a<<'\n';
	cout<<b;
}
