#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int len,loc;
    cin >> len;
    vector<int> arr(len); 
    
    for (auto& i:arr){
        cin >> i;
    }
    cin >> loc;
    arr.erase(arr.begin()+loc-1);
    
    int loc1,loc2;
    cin >> loc1 >> loc2;
    
    arr.erase(arr.begin()+loc1-1,arr.begin()+loc2-1);
    
    cout << arr.size() << endl;
    
    for (auto i:arr){
        cout << i << " ";
    }
    
    return 0;
}