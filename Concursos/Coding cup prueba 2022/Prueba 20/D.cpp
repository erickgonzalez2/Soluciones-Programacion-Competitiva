#include <bits/stdc++.h>

using namespace std;

map<int,int> numbers;
int rep;
int elements;
int once;
map <int,int> ::iterator it;
void pseudorandoms(int a,int c,int m,int x){
	
	it= numbers.find(x);
	
	if(it==numbers.end()){
		numbers.insert({x,1});
		elements++;
		once++;
	}
	
	else{		
		if(it->second==2)return;	
		
		else{
			it->second++;
			rep++;
			once--;
		}	
	}
	x = (a*x+c)%m;
	pseudorandoms(a,c,m,x);
	
	return;
}


int main(){
	
	
	
	
	int a,c,m,x;
	
	while(cin>>a>>c>>m>>x){
		
		once = 0;
		rep=0;
		elements=0;
		pseudorandoms(a,c,m,x);
		
		elements>=m?cout<<"YES ":cout<<"NO ";
		cout<<elements<<" "<<once<<" "<<rep<<'\n';	
		
		numbers.clear();	
	}
	
}
