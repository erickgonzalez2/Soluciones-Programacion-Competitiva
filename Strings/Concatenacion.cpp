#include <iostream>
#include <string>
using namespace std;
int main(){
	string s0("Hello Worl");
	s0.push_back('d');
	s0.append("!");
	s0 += '?';
	s0.insert(1,",");
	cout<< s0;
}
