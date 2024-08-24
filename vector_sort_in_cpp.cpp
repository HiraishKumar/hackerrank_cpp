#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main()
{
    int size {};
    std::cin >> size;
    
    // Constructs a 'std::vector' of given size
    std::vector<int> v (size);
    
    // Loops through the vector by reference
    // setting its elements to inputted values
    for(auto& i : v)
        std::cin >> i;
        
    std::sort(v.begin(), v.end());
    
    for(auto i : v)
        std::cout << i << ' ';
    
    return 0;
}