#include <bits/stdc++.h>
using namespace std;
 int main(){
 	ios_base::sync_with_stdio(false);cin.tie(0);
 	int n;
 	
	 while(cin>>n && n){
	 	
	 	vector <pair <int,int> > pole;
		int car,position;
		
		while(n--){
			cin>>car>>position;
			pole.push_back(make_pair(position,car));
		}		
		
		bool negativo=true;
		vector <pair <int,int> >::iterator it;
		
		int sum=0;
		int numswaps;
		
		it= min_element(pole.begin(),pole.end());
		numswaps=it->first;
		numswaps*=numswaps;
		numswaps= sqrt(numswaps);
		for(auto i=pole.begin();i!=pole.end();i++)sum+=i->first;
		
		
		if(sum==0 && numswaps<=pole.size()){
			
			bool negative=true;
			int numit=0;
			bool no=false;
			while(negative){
				it= min_element(pole.begin(),pole.end());
				numswaps=it->first;
				if(numswaps>=0)negative=false;
				else{
					numswaps*=-1;
					vector <pair <int,int> >::iterator itr;
					while(numswaps--){
						itr=it--;
						iter_swap(it,itr);
						it->first++;
						itr->first--;
						numit++;
					}
				}
				if(numit>pole.size()*pole.size()){
					negative=false;
					no=true;
				}
			}
			
			if(no){
				cout<<"-1\n";
			}
			
			
			else{
				for(auto i=pole.begin();i!=pole.end();i++){
					if(i!=pole.begin())cout<<" ";
					cout<<i->second;
				}
				cout<<'\n';
			}
			
		}
		
		else cout<<"-1\n";
	 }
	 	
 }
