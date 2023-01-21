#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	cin>>n;
	while(n!=0){
		cin.ignore();
		
		string str;
		vector <int>count;
		
		while(n--){
			int c=0;
			getline(cin,str);
			for(auto it=str.begin();it!=str.end();it++){
				if(*it=='X')c++;
			}
			count.push_back(c);
		}
		sort(count.begin(),count.end(),greater <int> ());
		int max=count[0];
		int rest=0;
		
		for(auto it=count.begin();it!=count.end();it++){
			if(max>*it)rest+=max-*it;
		}
		cout<<rest<<'\n';
		
		cin>>n;
	}
}
