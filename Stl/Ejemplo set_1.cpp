#include <bits/stdc++.h>
using namespace std;
int main(){
	set <int> s;
	s.insert(20);
	s.insert(30);
	s.insert(120);
	s.insert(130);
	s.insert(230);
	for(auto it=s.begin();it!=s.end();it++){
		cout<<*it<<'\n';
	}
}
