#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	string str;
	cin>>n;
	
	while(n--){
		cin>>str;
		
		if(str=="1" || str=="4" || str=="78")cout<<"+\n";
		
		else if(str[str.length()-1]=='5' && str[str.length()-2]=='3')cout<<"-\n";
		
		else if(str[0]=='9' && str[str.length()-1]=='4')cout<<"*\n";
		
		else cout<<"?\n";
	}
	
}

