#include <bits/stdc++.h>
using namespace std;
int main (){
	ios_base::sync_with_stdio(false);cin.tie();
	int n;
	int t1,t2;
	vector <int> vec;
	vector <int> vec2;
	int c=0;
	int a;
    int vecc=0;
    int vec2c=0;
	cin>>n;
	while(n--){
		cin>>t1>>t2;
		for(int i=0;i<t1;i++){
			cin>>a;
			vec.push_back(a);
		}
		for(int i=0;i<t2;i++){
			cin>>a;
			vec2.push_back(a);
		}
		sort(vec.begin(),vec.end());
		sort(vec2.begin(),vec2.end());
		int count=0;
        int acount=0;
        int bcount=0;
        
        while((acount<t1)&&(bcount<t2)){
            if(vec[acount]==vec2[bcount]){
                acount++;
                bcount++;
            }
            else if(vec[acount]<vec2[bcount]){
                count++;
                acount++;
            }
            else{
                count++;
                bcount++;
            }
        }
        while(acount<t1){
            count++;
            acount++;
        }
        while(bcount<t2){
            count++;
            bcount++;
        }
        
        cout << count << '\n';
        vec.clear();
        vec2.clear();
        
    }
}
