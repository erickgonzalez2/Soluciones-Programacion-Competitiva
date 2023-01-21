#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1("alpha");
	string s2("beta");
	if(s1 == s2)cout<< "S1 and S2 are equal\n";
	if(s1 != s2)cout<< "S1 and S2 not are equal\n";
	if(s1 < s2) cout<< "S1 is lesser than S2\n";
	if(s1 > s2) cout<< "S1 is greater than S2\n";
	if(s1 <= s2)cout<< "S1 is less or equal than S2\n";
	if(s1 >= s2)cout<< "S1 is greater or equal than S2\n";
	if(s1.compare(s2)==0)cout << "S1 and S2 are equal\n";
	if(s1.compare(s2)!=0)cout << "S1 and S2 not are equal\n";
	if(s1.compare(s2)<0)cout <<  "S1 is lesser than S2\n";
	if(s1.compare(s2)>0)cout <<  "S1 is greater than S2\n";
	if(s1.compare(s2)<=0)cout << "S1 is less or equal than S2\n";
	if(s1.compare(s2)>=0)cout << "S1 is greater or equal than S2\n";
	return 0;
}
