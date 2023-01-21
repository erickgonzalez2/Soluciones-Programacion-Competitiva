	#include <bits/stdc++.h>
	
	using namespace std;
	
	
	int main(){
		
		int tx1,ty1,tx2,ty2,tx3,ty3,tx4,ty4;					
		int t2x1,t2y1,t2x2,t2y2,t2x3,t2y3,t2x4,t2y4;
		
		cin>>tx1>>ty1>>tx2>>ty2>>tx3>>ty3>>tx4>>ty4;
			
		cin>>t2x1>>t2y1>>t2x2>>t2y2>>t2x3>>t2y3>>t2x4>>t2y4;
		pair<int, int> t1Sup;
		pair<int, int> t1Inf;
		pair<int, int> t2Sup;
		pair<int, int> t2Inf;
		if((tx1 >= tx2 && tx1>=tx3 && tx1>=tx4)&&(ty1 >= ty2 && ty1>=ty3 && ty1>=ty4)){
			t1Sup = make_pair(tx1, ty1);
		}else if((tx2 >= tx1 && tx2>=tx3 && tx2>=tx4)&&(ty2 >= ty1 && ty2>=ty3 && ty2>=ty4)){
			t1Sup = make_pair(tx2, ty2);	
		}else if((tx3 >= tx1 && tx3>=tx2 && tx3>=tx4)&&(ty3 >= ty1 && ty3>=ty2 && ty3>=ty4)){
			t1Sup = make_pair(tx3, ty3);
		}else {
			t1Sup = make_pair(tx4, ty4);
		}
		//T1 ibferior
		if((tx1 <= tx2 && tx1<=tx3 && tx1<=tx4)&&(ty1 <= ty2 && ty1<=ty3 && ty1<=ty4)){
			t1Inf = make_pair(tx1, ty1);
		}else if((tx2 <= tx1 && tx2<=tx3 && tx2<=tx4)&&(ty2 <= ty1 && ty2<=ty3 && ty2<=ty4)){
			t1Inf = make_pair(tx2, ty2);
		}else if((tx3 <= tx1 && tx3<=tx2 && tx3<=tx4)&&(ty3 <= ty1 && ty3<=ty2 && ty3<=ty4)){
			t1Inf = make_pair(tx3, ty3);
		}else {
			t1Inf = make_pair(tx4, ty4);
		}
		
		
		if((t2x1 >= t2x2 && t2x1>=t2x3 && t2x1>=t2x4)&&(t2y1 >= t2y2 && t2y1>=t2y3 && t2y1>=t2y4)){
			t2Sup = make_pair(t2x1, t2y1);
		}else if((t2x2 >= t2x1 && t2x2>=t2x3 && t2x2>=t2x4)&&(t2y2 >= t2y1 && t2y2>=t2y3 && t2y2>=t2y4)){
			t2Sup = make_pair(t2x2, t2y2);	
		}else if((t2x3 >= t2x1 && t2x3>=t2x2 && t2x3>=t2x4)&&(t2y3 >= t2y1 && t2y3>=t2y2 && t2y3>=t2y4)){
			t2Sup = make_pair(t2x3, t2y3);
		}else {
			t2Sup = make_pair(t2x4, t2y4);
		}
		//T1 ibferior
		if((t2x1 <= t2x2 && t2x1<=t2x3 && t2x1<=t2x4)&&(t2y1 <= t2y2 && t2y1<=t2y3 && t2y1<=t2y4)){
			t2Inf = make_pair(t2x1, t2y1);
		}else if((t2x2 <= t2x1 && t2x2<=t2x3 && t2x2<=t2x4)&&(t2y2 <= t2y1 && t2y2<=t2y3 && t2y2<=t2y4)){
			t2Inf = make_pair(t2x2, t2y2);
		}else if((t2x3 <= t2x1 && t2x3<=t2x2 && t2x3<=t2x4)&&(t2y3 <= t2y1 && t2y3<=t2y2 && t2y3<=t2y4)){
			t2Inf = make_pair(t2x3, t2y3);
		}else {
			t2Inf = make_pair(t2x4, t2y4);
		}
		
		if((t2Sup>=t1Sup && t2Inf<=t1Inf)){
			cout<<"HAN GANADO La tarjeta 1 esta contenida en la tarjeta 2"<<endl;
		}else if((t1Sup>=t2Sup && t1Inf<=t2Inf)){
			cout<<"HAN GANADO La tarjeta 2 esta contenida en la tarjeta 1"<<endl;
		}else{
			cout<<"HAN PERDIDO"<<endl;
		}
		//arriba sean los mayores	
	}
