#include <bits/stdc++.h>


using namespace std;

#define MAX 132789

vector <long long>ulam;

void precalculo(){
	
	ulam.push_back(1);
	ulam.push_back(2);
		
		
	long long a,b;	
	
	unordered_set <long long> tabla;	
	
	tabla.insert(1);
	tabla.insert(2);
	
	for(long long i=3;i<MAX;i++){
		
		long long count = 0;
		
		for(long int j=0;j<ulam.size();j++){
			
			if(tabla.find(i-ulam[j])!=tabla.end() && ulam[j]!=(i-ulam[j])) count++;
			
			if(count>2)break;
		}
		
		
		if(count==2){
			ulam.push_back(i);
			tabla.insert(i);
		}
		
	}
}
	
	
	

int main(){
	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	precalculo();
	
	
	
	int t;
	int n;
			
	
	cin>>t;
	
	for(int i=0;i<MAX;i++){
		cout<<ulam[i]<<" , ";
	}
}
