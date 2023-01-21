#include <vector>
#include <iostream>
using namespace std;
int main(){
	vector <vector<int>>vv;
	vector<int> v;
	vv.push_back(v);
	vv[0].push_back(1);
	cout<<vv;
}

