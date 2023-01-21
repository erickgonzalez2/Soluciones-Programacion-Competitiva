#include <vector>
#include <iostream>
using namespace std;
int main(){
	int myInts[5] = {1,2,3,4,5};
	vector<int> s(myInts,myInts+5);
	auto it = s.begin();
	auto rt = s.rbegin();
	while(it!= s.end()){
		cout<< (*it) << '\n';it++;}
		
	while(rt!= s.rend()){
		cout<< (*rt) << '\n';rt++;}	
	}
