#include <bits/stdc++.h>
using namespace std;
bool lose;
int fi,ci;
int f,c;
char dir;
string dr;
set <pair <int,pair<int,char>>>  lost;
set <pair <int,pair<int,char>>>::iterator  ser;

void direction(char u){
	if(u=='R'){
		if(dir=='N')dir='E';
		else if(dir=='E')dir='S';
		else if(dir=='S')dir='W';
		else if(dir=='W')dir='N';
		
	}
	
	else if(u=='L'){
		if(dir=='N')dir='W';
		else if(dir=='W')dir='S';
		else if(dir=='S')dir='E';
		else if(dir=='E')dir='N';
	}
}

void advan(){
	ser = lost.find({fi,{ci,dir}});
	
	if(ser==lost.end()){
		
		if(dir=='S'){
			if(fi-1>=0)fi--;
			else{
				lost.insert({fi,{ci,dir}});
				fi--;
				lose=true;
			}
		}
		
		else if(dir=='N'){
			if(fi+1<f)fi++;
			else{
				lost.insert({fi,{ci,dir}});
				fi++;
				lose=true;
			}
		}
		
		else if(dir=='E'){
			if(ci-1>=0)ci--;
			else{
				lost.insert({fi,{ci,dir}});
				ci--;
				lose=true;
			}
		}
		
		else if(dir=='W'){
			if(ci+1<c)ci++;
			else{
				lost.insert({fi,{ci,dir}});
				ci++;
				lose=true;
			}
		}
		
	}
}

int main(){
	
	cin>>f>>c;

	lose=false;
	
	while(cin>>fi>>ci>>dir){
		cin.ignore();
		getline(cin,dr);
		
		for(int i=0;i<dr.size();i++){
			if(dr[i]!='F')direction(dr[i]);
			
			else {
				advan();	
			}
			
			
			if(lose){
				cout<<fi<<" "<<ci<<" "<<dir<<" LOST\n";
				break;
		}
	}
		if(!lose){
			cout<<fi<<" "<<ci<<" "<<dir<<"\n";
		}
	}
}
