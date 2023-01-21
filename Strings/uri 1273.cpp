#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int c;
	int z=0;
	while(cin>>c){
		if(c==0)return 0;
		if(z!=0)cout<<'\n';
		string str[c];
		for(int i=0;i<c;i++){
			cin>>str[i];
		}
		vector<int> max;
		
		for(int i=0;i<c;i++){
			max.push_back(str[i].size());
		}
		
		sort(max.begin(),max.end(),greater<int>());
		int a=max[0];
		
		for(int i=0;i<c;i++){
			while(str[i].size()!=a){
				str[i].insert(0," ");
			}
		}
		
		for(int i=0;i<c;i++){
			cout<<str[i]<<'\n';
		}
		max.clear();
		z++;
	}
}
