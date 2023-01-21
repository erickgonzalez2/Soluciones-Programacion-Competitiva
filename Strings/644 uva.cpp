#include <bits/stdc++.h>

using namespace std;



int main(){
	
	string str;		
	vector<string> comparations;
	int lim;
	int s=1;
	bool enc = false;
	while(cin>>str){
		
		if(str=="9"){
			
			for(int i=0;i<comparations.size();i++){
				str = comparations[i];
				lim = str.size();				
				for(int j=0;j<comparations.size();j++){
					
					if(i!=j){						
						if(comparations[j].substr(0,lim)==str){
							cout<<"Set "<<s++<<" is not immediately decodable\n";
							enc=true;
							break;
						}
					}					
				}
				if(enc)break;
			}
			if(!enc)cout<<"Set "<<s++<<" is immediately decodable\n";
			enc = false;
			comparations.clear();
	}
		
		else{						
			comparations.push_back(str);			
		}
		
		
	}
	
	
}
