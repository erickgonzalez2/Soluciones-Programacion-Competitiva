#include <bits/stdc++.h>
using namespace std;

string T,P;
int n,m;
void naiveMatching(){

		for(int i = 0; i<n;i++){
			
			bool found = true;
			for(int j = 0;j< m && found; j++)
				if(i + j>= n || P[j] !=T[i + j])
				found = false;
				if(found)
				printf("P is found at index %d in T\n",i);
	
			
		}
}


int main(){
	T = "AAAAAAAAAAB";
	P = "AAAB";
	n = T.size();
	m = P.size();
	naiveMatching();
}
