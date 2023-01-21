#include <vector> 
#include <algorithm> 
#include <iostream> 
int main() 
{ 
    std::vector<int> v(10, 2); 
      
    // illustrate all_of 
    if (std::all_of(v.cbegin(), v.cend(), [](int i){ return i % 2 == 0; }))  
    { 
        std::cout << "All numbers are even\n"; 
    } 
  
} 
