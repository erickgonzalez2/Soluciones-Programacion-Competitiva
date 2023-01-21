#include <bits/stdc++.h>

using namespace std;

float power(string v,string preV, string in,string preIn){
	
	float x,y;
	
	x = stof(v);
	y = stof(in);
	
	switch(preV[0]){
		case 'k':
			x = x*1000;
			break;
		
		case 'm':
			x = x/1000;
			break;
			
		case 'M':
			x = x*1000000;
			break;
	}
	
	switch(preIn[0]){
		case 'k':
			y = y*1000;
			break;
		
		case 'm':
			y = y/1000;
			break;
			
		case 'M':
			y = y*1000000;
			break;
	}
	
	return x*y;
}

float intensity(string p,string preP, string v,string preV){
	float x,y;
			
	x = stof(p);
	y = stof(v);
	
	switch(preP[0]){
		case 'k':
			x = x*1000;
			break;
		
		case 'm':
			x = x/1000;
			break;
			
		case 'M':
			x = x*1000000;
			break;
	}
	
	switch(preV[0]){
		case 'k':
			y = y*1000;
			break;
		
		case 'm':
			y = y/1000;
			break;
			
		case 'M':
			y = y*1000000;
			break;
	}
	
	return x/y;
	
}

float voltage(string p,string preP, string in, string preIn){
	float x,y;		
	x = stof(p);
	y = stof(in);
	
	switch(preP[0]){
		case 'k':
			x = x*1000;
			break;
		
		case 'm':
			x = x/1000;
			break;
			
		case 'M':
			x = x*1000000;
			break;
	}
	
	switch(preIn[0]){
		case 'k':
			y = y*1000;
			break;
		
		case 'm':
			y = y/1000;
			break;
			
		case 'M':
			y = y*1000000;
			break;
	}
	
	return x/y;
	
}

int main(){
	
	int t;
	string str;
	cin>>t;
	string p;	
	string u;	
	string it;
	int problem = 1;
	cin.ignore();
	while(t--){
			
		p="";
		string prefixP ="";
		u="";
		string prefixU ="";		
		it="";
		string prefixI ="";
		
		bool leerU = false;
		bool leerP = false;
		bool leerI = false;		
		
		getline(cin,str);
		
		for(int i=0;i<str.size();i++){
			
			
			if(str[i]=='U')leerU=true;
								
			
			
			else if(str[i]!='=' && leerU){				
				if(isdigit(str[i])||str[i]=='.'){					
					u+=str[i];	
				}
				
				else{
					if(str[i]=='m'||str[i]=='k'||str[i]=='M'){
						prefixU+=str[i];
						prefixU+=str[i+1];
					}					
					else if(str[i]=='V')prefixU+=str[i];	
										
					leerU=false;				
					}
				}
			
				if(str[i]=='P')leerP=true;
			
			else if(str[i]!='=' && leerP){
				
				if(isdigit(str[i])||str[i]=='.')p+=str[i];
				
				else{
					if(str[i]=='m'||str[i]=='k'||str[i]=='M'){
						prefixP+=str[i];
						prefixP+=str[i+1];
					}					
					else if(str[i]=='W')prefixP+=str[i];	
										
					leerP=false;				
					}
				}
				
				if(str[i]=='I'){
					leerI=true;
				}
			
			else if(str[i]!='=' && leerI){
				
				if(isdigit(str[i])||str[i]=='.')it+=str[i];
				
				else{
					if(str[i]=='m'||str[i]=='k'||str[i]=='M'){
						prefixI+=str[i];
						prefixI+=str[i+1];
					}					
					else if(str[i]=='A')prefixI+=str[i];	
										
					leerI=false;				
					}
				}						
		}
		
		
		float result;
	
		cout<<"Problem #"<<problem++<<"\n";
	
		if(u==""){
			result = voltage(p,prefixP,it,prefixI);
			printf("U=%.2fV",result);
		}	
		else if(it==""){
			result = intensity(p,prefixP,u,prefixU);
			printf("I=%.2fA",result);
		}	
		else if(p==""){
			result = power(u,prefixU,it,prefixI);
			printf("P=%.2fW",result);
		}
		
		cout<<"\n\n";	
	}
	
	
	
}
