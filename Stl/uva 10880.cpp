#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	long long int casos=0;
	long long int n;
	
	long long int c;
	long long int cl;
	
	cin>>n;
	while(n--){
		casos++;
		cin>>c>>cl;
		long long int factors[100000],k=0,aux;
		
		cout<<"Case #"<<casos<<": ";
		
		if(c==cl)cout<<"0\n";

		else{
			long long int i;
			aux=c-cl;
			for(i=1;i*i<=aux;i++){
					if(aux%i==0){
					factors[k++] = i;
				if (i*i !=aux)factors[k++] = aux/ i;
				}
			}	
			sort(factors, factors + k);
			for (int i = 0; i < k; i++) {
			if (factors[i] > cl)cout<<factors[i]<<" ";
		}			
			cout<<'\n';
		}
	}
}
