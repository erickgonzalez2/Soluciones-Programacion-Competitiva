#include <bits/stdc++.h>
using namespace std;
int main(){
		ios_base::sync_with_stdio(false);
	
	 int n;
	 int x;
	cin>>n;
	
		int l1,l2;
		multiset<int>list1;
		multiset<int>list2;
	
	
	while(n--){
		int nenc=0;
		
		cin>>l1>>l2;
		
		while(l1--){
			cin>>x;
			list1.insert(x);
		}
		
		while(l2--){
			cin>>x;
			list2.insert(x);
		}
		
		if(list1.size()>list2.size()){
			
			for(auto it=list2.begin();it!=list2.end();it++){
				
				auto itr= list1.find(*it);
				
				if(itr!=list1.end()){
					list1.erase(itr);
				}
				else nenc++;
			}
			
			cout<<nenc+list1.size()<<'\n';
		}
		
		else{
			
			for(auto it=list1.begin();it!=list1.end();it++){
				
				auto itr= list2.find(*it);
				
				if(itr!=list2.end()){
					list2.erase(itr);
				}
				else nenc++;
			}
			
			cout<<nenc+list2.size()<<'\n';
		}
		
		list1.clear();
		list2.clear();
	
		}	
	}
