#include<bits/stdc++.h> 
using namespace std; 

vector <string>subs;

// Function to print all sub strings 
void subString(string s, int n)  
{ 
    // Pick starting point in outer loop 
    // and lengths of different strings for 
    // a given starting point 
    for (int i = 0; i < n; i++)  
        for (int len = 1; len <= n - i; len++) 
        	subs.push_back(s.substr(i,len));
} 
  
// Driver program to test above function 
int main()  
{ 
    string s = "abcd"; 
    subString(s,s.length()); 
    for(string i:subs){
    	cout<<i<<'\n';
	}
    return 0; 
}
