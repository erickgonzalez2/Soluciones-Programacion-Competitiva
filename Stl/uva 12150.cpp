#include <bits/stdc++.h>
using namespace std;
 int main(){
	
 	int n;
 	
	 while(cin>>n && n){

	 	vector <pair <int,int> > pole;
	 	vector <pair <int,int> >::iterator it;
	 	vector <pair <int,int> >::iterator max;
		int car,position;
		int numswaps;
		int lowers_only=0;
		
		while(n--){
			cin>>car>>position;
			pole.push_back(make_pair(position,car));
		}		
		
		it= min_element(pole.begin(),pole.end());
		numswaps=it->first;
		
		bool negative=true;
		bool imposible=false;
			
			while(negative){
				it= min_element(pole.begin(),pole.end());
				max= max_element(pole.begin(),pole.end());
				numswaps=it->first;
				if(numswaps>=0){
					negative=false;
					if(max->first>0)imposible=true;
				}
				else{
					if(lowers_only>=numswaps && lowers_only!=0){
						negative=false;
						imposible=true;
						break;
					}
					else if(numswaps*-1>pole.size() || max->first>pole.size()) {
						negative=false;
						imposible=true;
						break;
					}
					lowers_only=numswaps;
					numswaps*=-1;
					vector <pair <int,int> >::iterator itr;
					while(numswaps--){
						itr=it--;
						iter_swap(it,itr);
						it->first++;
						itr->first--;
					}
				}
			}
			
			if(imposible)cout<<"-1\n";
			
			else
				{
					auto i=pole.begin();
					cout<<i->second;
					i++;
				for(it=i;it!=pole.end();it++){
					cout<<" "<<it->second;
				}
				cout<<'\n';
			}
			
		}//final del while
//final
 }
