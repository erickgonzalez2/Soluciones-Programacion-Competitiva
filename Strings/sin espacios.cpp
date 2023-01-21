#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string name;
	
	cout<<"Plese, enter your full name: ";
	for(int i=0;i<10;i++){
	getline(cin, name);
	cout<<"Hello, "<<name << "!\n";
}
	return 0;
}
