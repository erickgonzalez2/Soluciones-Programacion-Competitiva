#include <iostream>
using namespace std;
int main(){
	int c,n,m,i;
	cin>>c;
	for(i=0;i<c;i++){
		cin>>n>>m;
		printf("%d\n",(n/3)*(m/3));
	}
	 return 0;
}
