#include <iostream>
using namespace std;

int main(){
	int  n,p;
	cin >>n;
	string arr[n];
	char mat[n][n];
	for( int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	string persona1,persona2;
	cin>>p;
	int array[p];
	for(int m=0;m<p;m++){
		cin>>persona1>>persona2;
		for(int i=0;i<n;i++){
			if(persona1==arr[i]){
			for(int j=0;j<n;j++){
					if(persona2==arr[j]){ cout<<mat[i][j]<<'\n'; break; }
				}
			}
			continue;
		}
		}
		return 0;
	}
