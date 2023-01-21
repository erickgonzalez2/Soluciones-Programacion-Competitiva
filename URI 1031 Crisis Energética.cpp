#include <bits/stdc++.h>

using namespace std;

int main(){
	
	list <int> a;
	
	int x;
	
	for(int i = 0;i<10; i++){
		x = i;
		a.push_back(x);
	}
	
	auto it = a.end();
	cout<<*it;
	
	
	
}
