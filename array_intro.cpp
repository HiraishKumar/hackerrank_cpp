#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int len;
    scanf("%d",&len);
    
    int arr[len];
    for(int i=0;i<len;i++){

        
    std::cin >> arr[i];
    };

    for(int i=len-1;i>=0;i--){
    std::cout << arr[i] << " ";
    }
    return 0;
}
