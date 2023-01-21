//Mcd de tres
#include <stdio.h>

int mcd(int u,int v,int w){
	int t;
	while(u>0){
		if(u<v){
			
			if(u<w){
				
				if(w<v){
					t=u;
					u=v;
					v=w;
					w=t;
				}
				else{
					t=u;
					u=w;
					v=v;
					w=u;
				}
			}
			else{
				t=u;
				u=v;
				v=t;
				w=w;
			}
		}
		else if(u<w){
			t=u;
			u=w;
			w=v;
			v=u;
		}
		else{
			if(v<w){
				t=w;
				u=u;
				w=v;
				v=t;
			}
		}
		u=u-w-v;
		v=v-w;
	}
	return w;
}


int main(){
	int x,y,z;
	scanf("%ld %ld %ld",&x,&y,&z);
	int m;
	m = mcd(x,y,z);
	printf("%ld",m*-1);
}
