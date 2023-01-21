#include <bits/stdc++.h>


using namespace std;

int main(){
	
	int n;
	
	vector<string>palindromos_completos;
	vector<string>palindromos_parciales;
	
	string str;
	
	cin>>n;
	
	while(n--){
		
		cin>>str;
		
		int i,j;
		i = 0;
		j = str.size()-1;
		
		int palindromo = 1;
		
		while(i!=j && j>i){
			
			if(str[i]==str[j] && palindromo == 1)palindromo=1;
			
			else if(tolower(str[i])==tolower(str[j])){
				palindromo = 2;
			}
			
			else{
				palindromo = -1;
				break;
			}
			i++;
			j--;			
		}
		
		if(palindromo == 1)palindromos_completos.push_back(str);
		else if(palindromo ==2)palindromos_parciales.push_back(str);
	
	}
	
	cout<<"*PALINDROMOS COMPLETOS*\n";
	
	if(!palindromos_completos.empty()){
		
		for(string s : palindromos_completos){
			cout<<s<<"\n";
		}		
	}
	else cout<<"-1\n";
	
	cout<<'\n';
	
	cout<<"*PALINDROMOS PARCIALES*\n";
	
	if(!palindromos_parciales.empty()){
		
		for(string s : palindromos_parciales){
			cout<<s<<"\n";
		}		
	}
	else cout<<"-1\n";
	
	
	
	
	
}
