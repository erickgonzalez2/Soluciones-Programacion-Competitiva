#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int nc;
	int casos=1;
	string a,b,c="";
	cin>>nc;
	int x=nc;
	int k;
	while(1){
		if(nc==x)cin.ignore();
		nc--;
		getline(cin,a);
		getline(cin,b);
		c="";
		if(a==b)cout<<"Case "<<casos<<": Yes\n";
		else{
			
		for (int j=0; j<a.size(); j++){
			if (a[j]!=' '){
			c+=a[j];
			k++;
			}
		}
		c[k]='\0';
        if(c==b)cout<<"Case "<<casos<<": Output Format Error\n";
        else cout<<"Case "<<casos<<": Wrong Answer\n";
        k=0;
    }
		casos++;
		if(nc==0)break;
	}
}
