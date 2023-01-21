#include <vector>
#include <iostream>
using namespace std;
int main(){
	int arr[5] = {1,2,3,4,5};
	vector<int> vec(arr,arr+5);
	cout<<vec[1]<<'\n';
	int *p = vec.data();
	*p = 1;
	vec.at(4) = 5;
	cout<<vec.back() << '\n';
	vec.front() = 2;
	cout<< vec.at(0) << '\n';
	return 0;
}
