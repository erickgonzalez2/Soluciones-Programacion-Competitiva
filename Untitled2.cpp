#include<iostream>
using namespace std;
main()
{
    int f,c;
    cout<<"Dame la planta (f): "<<endl;cin>>f;
	cout<<"Dame la planta (c): "<<endl;cin>>c;
	int m1[f][c];
	int m2[f][c];
	int m3[f][c];
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"Matriz 1 poscision["<<i<<"]["<<j<<"]: ";
			cin>>m1[i][j];
		}
	}
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
		    cout<<"Matriz 2 poscision["<<i<<"]["<<j<<"]: ";
		    cin>>m2[i][j];
		}
	}
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
		m3[i][j]=m1[i][j]+m2[i][j];   
		}
	}
	
	cout<<"Tu matriz bebe: "<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
		    cout<<m3[i][j] ;
		}
		cout<<"\n";
	}
	
	
	return 0;
}
