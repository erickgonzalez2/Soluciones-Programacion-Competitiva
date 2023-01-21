#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1("hello. Wolrd.");
	cout<< s1[0];
	s1.front() = 'H';
	s1.back() = '!';
	cout<<s1.back();
	s1.at(5) = ',';
	cout<< s1 << '\n';
	return 0;
}
