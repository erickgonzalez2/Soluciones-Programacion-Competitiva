#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;

    vector<int>n({5,7,9,3,5,8,4,2,1,5,6,7,8,3,2,5,});

    //Llenar el set
    for(int i =0;i<n.size();i++){
        s.insert(n[i]);
    }

    for(auto it = s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<'\n';

    if(s.find(10)==s.end()){
        cout<<"El numero 10 no se encuentra en el Set "<<'\n';
        s.insert(10);
    }

    multiset<int>ms({5,7,9,3,5,8,4,2,1,5,6,7,8,3,2,5,});
    for(auto it = ms.begin(); it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<'\n'<<'\n';

    for(auto it = ms.begin(); it!=ms.end();it++){
        cout<<"El numero "<<*it<<" se repite "<< ms.count(*it)<< " veces"<<'\n';
    }

    return 0;
}

