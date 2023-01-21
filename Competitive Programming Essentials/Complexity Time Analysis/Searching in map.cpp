#include <bits/stdc++.h>

using namespace std;

int main(){
	
	unordered_map <string,int> menu;
	
	
	//Insert example  1
	/*menu["maggi"] = 15;
	menu["colddrink"] = 20;
	menu["dosa"] = 99;
	*/
	
	//Insert example 2
	int n;
	string k;
	int v;
	cout<<"Enter the number of elements\n";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Enter the key\n";	
		cin>>k;
		cout<<"Enter the value\n";	
		cin>>v;
		
		menu[k] = v;
	}
	
	//Search
	string item;
	
	//Enter the item to search
	cout<<"Enter the item to search\n";
	cin>>item;
	
	if(menu.count(item)==0){
		cout<<item<<" is not available"<<'\n';
	}
	else{
		cout<<item<<" is available, and its cost is " <<menu[item]<<'\n';
	}
	
	return 0;
}
