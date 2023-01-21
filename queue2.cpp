#include <queue>
#include <iostream>
using namespace std;
int main(){
	queue<int> q({5,10,15});
	cout << q.front() << '\n';
	cout << q.back() << '\n';
	q.pop();
	cout << q.front() <<'\n';
	q.push(20);
	cout << q.back() << '\n';
	return 0;
}
