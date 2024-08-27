#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, req, num;
    cin >> q ;
    set<int> s;
    
    set<int>::iterator itr;
    
    
    for (int i =0;i<q;i++){
        cin >> req >> num;
        if(req == 1){
            s.insert(num);
        }
        else if (req==2) {
            s.erase(num);
        }
        else if (req==3){
            itr = s.find(num);
            if (itr != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
