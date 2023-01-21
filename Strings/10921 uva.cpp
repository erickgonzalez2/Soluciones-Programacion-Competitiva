#include <bits/stdc++.h>
using namespace std;
int main(){
	string s0;
	string s1;
	while(getline(cin,s0)){
		for(string:: iterator it=s0.begin();it!=s0.end();it++){
			if(isalpha(*it)){
				switch(*it){
					case 'A':
					case 'B':
					case 'C':
						s1+='2';
						break;
						
					case 'D':
					case 'E':
					case 'F':
						s1+='3';
						break;
						
					case 'G':
					case 'H':
					case 'I':
						s1+='4';
						break;
					
					case 'J':
					case 'K':
					case 'L':
						s1+='5';
						break;
						
					case 'M':
					case 'N':
					case 'O':
						s1+='6';
						break;
						
					case 'P':
					case 'Q':
					case 'R':
					case 'S':
						s1+='7';
						break;
						
					case 'T':
					case 'U':
					case 'V':
						s1+='8';
						break;						
						
					case 'W':
					case 'X':
					case 'Y':
					case 'Z':
						s1+='9';
						break;
					
				}
			}
			else{
				s1+=*it;
			}
		}
		cout<<s1<<'\n';
		s1="";
	}
	
	return 0;
}
