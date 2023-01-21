#include <bits/stdc++.h>

using namespace std; 
  
void countFreq(int a[], int n) 
{ 
    // Insert elements and their 
    // frequencies in hash map. 
    unordered_map<int, int> hm; 
    for (int i = 0; i < n; i++) 
        hm[a[i]]++; 
  
    // Declare a set 
    set<pair<int, int> > st; 
  
    // insert the element and 
    // and insert its frequency in a set 
    for (auto x : hm) { 
        st.insert({ x.first, x.second }); 
    } 
  
    int cumul = 0; 
  
    // iterate the set and print the 
    // cumulative frequency 
    for (auto x : st) { 
        cumul += x.second; 
        cout << x.first << " " << cumul << endl; 
    } 
} 
  
// Driver Code 
int main() 
{ 
    int a[] = { 1, 3, 2, 4, 2, 1 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    countFreq(a, n); 
    return 0; 
} 
