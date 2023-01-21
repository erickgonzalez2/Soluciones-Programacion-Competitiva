#include <bits/stdc++.h>

using namespace std;

float distance(float x1,float y1,float x2,float y2){
 float d;	
	d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	return d;
}

int main(){
	
	float x1,y1,x2,y2,x3,y3;
	
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	float distancia = 0;
	
	distancia+= distance(x1,y1,x2,y2);
	distancia+= distance(x2,y2,x3,y3);
	distancia+= distance(x3,y3,x1,y1);
	
	printf("%.4f\n",distancia);
	
	
	
}
