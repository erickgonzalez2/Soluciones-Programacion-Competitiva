#include <bits/stdc++.h>
using namespace std;

int main(){

   int n,v,x;

   cin>>n;

   while(n--){

    vector<int>numeros;

    cin>>v;

    while(v--){

        cin>>x;
        numeros.push_back(x);

    }

    int ml = numeros[0];
    int ll = 0;
    int llx;
    int sum;
    for(int i=1;i<numeros.size();i++){

        llx = (ml>ll)? ml:ll;

        ml = ll+numeros[i];
        ll = llx;;
    }
    sum = (ml>ll)?ml:ll;
    cout<<sum<<'\n';
   }
}
