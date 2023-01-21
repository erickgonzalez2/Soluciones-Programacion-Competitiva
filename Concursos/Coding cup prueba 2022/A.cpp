#include <bits/stdc++.h>

using namespace std;


int main(){

	string a;
	string b;

	cin>>a;
	cin>>b;


	string c,d,e;
	
	c += a[3];c+=a[2];c+=a[0];c+=a[1];
	d += c[3];d+=c[2];d+=c[0];d+=c[1];
	e += d[3];e+=d[2];e+=d[0];e+=d[1];
	
	if(b==a)cout<<"1\n";
	else if(b==c)cout<<"2\n";
	else if(b==d)cout<<"3\n";
	else if(b==e)cout<<"4\n";	
	else cout<<"-1\n";
	

}
