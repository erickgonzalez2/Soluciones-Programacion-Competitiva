#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>letras;
    map<string, int> palabras;
    string s = "cmdkwpalddfncmqpalaamcdg";

    //Contar cuantas veces se repite cada letra
    for(int i = 0;i <s.size();i++){
        if(letras.find(s[i])!=letras.end()){
            letras[s[i]]++;
        }else{
            letras[s[i]]=1;
        }
    }
    cout<<"Repeticion de letras"<<'\n';
    for(auto it = letras.begin(); it!=letras.end(); it++){
        cout<<it->first<<" "<<it->second<<'\n';
    }
    cout<<'\n';

    //Contar cuantas veces se repite una palabra
    string  s2 = "all we ever hear from you is blah blah blah so all we ever do is go ha ha ha";
    string  s3 = "and we don't even care about what they say cause is ja ja ja blah blah blah ";
    string palabra;

    stringstream sst(s2);

    while(sst>>palabra){
        palabras[palabra]++;
    }

    sst.clear();
    sst.str(s3);

    while(sst>>palabra){
        palabras[palabra]++;
    }

    cout<<"Repeticion de palabras"<<'\n';
    for(auto it = palabras.begin(); it!=palabras.end(); it++){
        cout<<it->first<<" "<<it->second<<'\n';
    }

    return 0;
}

