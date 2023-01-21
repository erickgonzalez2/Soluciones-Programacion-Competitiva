#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1("Hello World to the best World!");
	int index = s1.find("World");
	cout<< index << '\n';
	index = s1.rfind("World");
	cout<< index << '\n';
	index = s1.find_first_of("tb");
	cout<< index << '\n';
	index = s1.find_last_of("ew");
	cout << index << '\n';
	index = s1.find_first_not_of("Heo");
	cout << index << '\n';
	index = s1.find_last_not_of("!dlroW t");
	cout << index << '\n';
	return 0;
}	

