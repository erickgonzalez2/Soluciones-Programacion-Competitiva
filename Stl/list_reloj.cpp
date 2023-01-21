#include <bits/stdc++.h>
using namespace std;
int main(){
	
	list <int>reloj;
	for(int i=1;i<=24;i++){
		reloj.push_back(i);
	}
	auto it=reloj.begin();
	while(1){
		if(it!=reloj.end())cout<<*it<<'\n';
		it++;
	}
	
	
	
	
	
}
