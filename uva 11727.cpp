#include <iostream>
using namespace std;
int main(){
	int casos;
	cin>>casos;
	int medio[casos];
	int a,b,c;
	for(int i=0;i<casos;i++){
		cin>>a>>b>>c;
		if(a>b && a<c)medio[i]=a;
		else if(a>c && a<b)medio[i]=a;
		else if(b>a && b<c)medio[i]=b;
		else if(b<a && b>c)medio[i]=b;
		else if(c<a && c>b)medio[i]=c;
		else if(c>a && c<b)medio[i]=c;
	}
	for(int i=0;i<casos;i++){
		printf("Case %d: %d\n",i+1,medio[i]);
	}
	
return 0;	
}
