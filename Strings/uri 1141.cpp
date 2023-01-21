#include <bits/stdc++.h>
using namespace std;

vector <string> farm;

bool comp(string a, string b){
	return a.size()>b.size();
}

int max(int n1,int n2);

int lcs(string X,string Y,int n,int m){
	int L[m + 1][n + 1];  
    int i, j;  
      
    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;  
      
        else if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  

    return L[m][n];  
}
int max(int a, int b)  
{  
    return (a > b)? a : b;  
}    

int main(){
	
	int casos;
	string str;
	
	while(cin>>casos && casos){
		
		int comon,mayor=0;
		
		while(casos--){			
			cin>>str;
			farm.push_back(str);
		}
		
		sort(farm.begin(),farm.end(),comp);
		
		string X,Y;
		int m,n;
		
		X = farm[0];
		m = X.size();
		
		for(int i=1;i<farm.size();i++){
			Y = farm[i];
			n = Y.size();
			comon = lcs(X,Y,n,m);
			if(comon>mayor)mayor=comon;
		}
		cout<<mayor<<'\n';
		farm.clear();
		}
	
}
