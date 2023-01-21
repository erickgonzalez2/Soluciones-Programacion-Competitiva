#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	char t;
	getline(cin,str);	
	string rt ;
	int rep=1;
	string n;
	string s1="";
	string s0="";
	for(int i=0;i<str.size();i++){
		if(isalpha(str[i])||isdigit(str[i])|| str[i]=='.' ){
			s1+=str[i];
			if(isalpha(str[i]))str[i]= toupper(str[i]);
			s0+=str[i];
		}
	}	
	cout<<s1<<'\n';
	t = s0[0];
	for(int i=1;i<s0.size()+1;i++){		
		
		if(i<=s0.size() && rep<=4 && t==s0[i]){		
			rep++;					
	}
	
		else {			
			switch(rep){
				case 2:
					rt = "double";
					break;
				case 3:
					rt = "triple";
					break;
				case 4:
					rt = "cuadruple";
					break;
				case 5:
					rt = "quintuple";
					break;
				
			}
			if(rep>1)cout<<rt<<" ";			
			
			switch(t){
				
				case 'A':
					cout<<"Alfa ";					
					break;
				case 'B':
					cout<<"Bravo ";			
					break;
					cout<<'\n';
				case 'C':
					cout<<"Charlie ";					
					break;			
				case 'D':
					cout<<"Delta ";					
					break;
				case 'E':
					cout<<"Echo ";					
					break;
				case 'F':
					cout<<"Foxtrot ";
					break;
				case 'G':
					cout<<"Golf ";					
					break;
				case 'H':
					cout<<"Hotel ";					
					break;
				case 'I':
					cout<<"India ";				
					break;
				case 'J':
					cout<<"Juliett ";					
					break;
				case 'K':
					cout<<"Kilo ";					
					break;
				case 'L':
					cout<<"Lima ";					
					break;
				case 'M':
					cout<<"Mike ";					
					break;
				case 'N':
					cout<<"November ";				
					break;
				case 'O':
					cout<<"Oscar ";					
					break;
				case 'P':
					cout<<"Papa ";					
					break;
				case 'Q':
					cout<<"Quebec ";					
					break;
				case 'R':
					cout<<"Romeo ";					
					break;
				case 'S':
					cout<<"Sierra ";				
					break;
				case 'T':
					cout<<"Tango ";					
					break;
				case 'U':
					cout<<"Uniform ";					
					break;
				case 'V':
					cout<<"Victor ";					
					break;
				case 'W':
					cout<<"Whiskey ";					
					break;
				case 'X':
					cout<<"X-Ray ";					
					break;
				case 'Y':
					cout<<"Yankee ";					
					break;
				case 'Z':
					cout<<"Zulu ";					
					break;
				case '0':
					cout<<"Zero ";					
					break;	
				case '1':
					cout<<"One ";					
					break;
				case '2':
					cout<<"Two ";					
					break;
				case '3':
					cout<<"Three ";					
					break;
				case '4':
					cout<<"Four ";					
					break;
				case '5':
					cout<<"Five ";
					break;
				case '6':
					cout<<"Six ";					
					break;
				case '7':
					cout<<"Seven ";					
					break;
				case '8':
					cout<<"Eight ";					
					break;
				case '9':
					cout<<"Nine ";					
					break;
				case '.':
					cout<<"Decimal ";					
					break;								
			}
			rep = 1;
			t = s0[i];		
			
		}
		
		
	}
	
	cout<<'\n';
	
}
