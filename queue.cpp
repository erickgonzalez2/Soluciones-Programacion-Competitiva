#include <queue>
using namespace std;
int main(){
	queue<int> q;
	q.push(5);
	int x = 10, y = 5;
	q.push(x+y);
	q.pop();
	return 0;
}
