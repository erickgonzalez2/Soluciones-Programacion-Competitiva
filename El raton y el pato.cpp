#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float r,p;
	cin >> r >>p;
	float seconds;
	seconds= (r/2)*p;
	cout << seconds << setprecision(2);
	return 0;
}
