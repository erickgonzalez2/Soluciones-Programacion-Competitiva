#include <iostream>
#include <string>
#include <ctime>

using namespace std;


int main(){
	
	
	time_t t = time(nullptr);
	
	tm* now = localtime(&t);
	
	char buffer[128];
	
	strftime(buffer,sizeof(buffer),"%X",now);
	
	string tiempo = buffer;
	
	cout<<tiempo;
	
	
	
	
}
