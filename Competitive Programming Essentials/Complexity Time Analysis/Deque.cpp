#include <bits/stdc++.h>

using namespace std;

int main(){
	
	deque <int> dq(10);
	
	for(int i=0;i<10;i++){
		dq[i] = i*i;
	}
	
	cout<<dq.front()<<'\n';
	
	dq.push_front(1);
	
	cout<<dq.front()<<'\n';
	
	
	return 0;
}
