#include <bits/stdc++.h>

using namespace std;

int main(){
	
long long int a,b;

long long int max,min;
long long int t;

cin>>t;


while(t--){

cin>>a>>b;

if(a>=b){
	max=a;
	min = b;
}
else {
	max = b;
	min = a;
}

long long int sum=0;

sum = ((max-min+1)*(max+min))/2;


cout<<sum<<'\n';	
}	
}
