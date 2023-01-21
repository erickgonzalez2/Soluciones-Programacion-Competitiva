#include <bits/stdc++.h>
using namespace std;
int numbers[3000];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	int k;
	int dif;
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>k;
			numbers[i]=k;
		}
		list <int>diferences;
		for(int i=0;i<n-1;i++){
			dif = numbers[i]-numbers[i+1];
			if(dif<0)dif*=-1;
			diferences.push_back(dif);
		}
		bool jolly=true;
		
		int i=1;
		while(i!=n){
			auto it = find(diferences.begin(),diferences.end(),i);
			if(it==diferences.end()){
			jolly=false;
			break;
			}
			i++;
		}
		
		
		if(jolly)cout<<"Jolly\n";
		else cout<<"Not jolly\n";
	}
}
