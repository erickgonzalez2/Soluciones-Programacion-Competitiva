#include <stdio.h>
#include <iostream>
using namespace std;

int fa,fb;


int reducir(int nominador,int denominador){
	if(denominador==1){
		cout <<nominador<<"/"<<denominador;
	}else{
	int b=2;
	while(b<=nominador){
		if(denominador%b==0 && nominador%b==0){
			denominador=denominador/b;
			nominador=nominador/b;
		}else{
		b++;
		}
	}
	
	fa=nominador;
	fb= denominador;
	cout << nominador << "/"<<denominador<<" ";

	}
	return 0;

}


void comprobar(int nom,int dem){
	
	string str1 = to_string(nom);
	string str2 = to_string(dem);
	
	
	bool flag = true;
	bool find = false;
	
	while(flag){
		
		if(str1.size()==1 || str2.size()==1){
			break;
		}
		
		int p1,p2;
		
		
		
		for(int i = 0 ; i<str1.size();i++){
			
			for(int j = 0;j<str2.size();j++ ){
				
				if(str1[i]==str2[j]){
					p1=i;
					p2=j;
					find =true;
					break;
				}
				
			}
			if(find){
				break;
			}
		}
		
		if(find){
				find = false;
				str1.erase(p1,1);
				str2.erase(p2,1);
				
				
			}
			else{
				flag = false;
			}
		
		
	}
	
	
	nom = stoi(str1);
	dem = stoi(str2);
	
	if(nom==fa && dem ==fb)cout<<"SI\n";
	else cout<<"NO\n";
	
}

int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);
	
	
	int t;
	
	int n,m;
	
	cin>>t;
	
	while(t--){

	
	
	cin>>n>>m;
	
	reducir(n,m);
	
	if(fa==n&& fb==m){
		cout<<"SI\n";
	}
	
	else comprobar(n,m);
	
	}

}
