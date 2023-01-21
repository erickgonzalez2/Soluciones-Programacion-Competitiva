#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	int c;
	int max;
	int x;
	cin>>n;
	int i=1;
	while(n--){
		cin>>c;
		cin>>max;
		c--;
		while(c--){
			cin>>x;
			if(x>max)max=x;
		}
		cout<<"Case "<<i++<<": ";
		cout<<max<<'\n';
	}
}
