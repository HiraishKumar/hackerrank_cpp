#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    
    map<string, int> m;
    for(int i=0;i<q;i++){
        int quer,mark;
        string name;
        cin >> quer ;
        switch (quer) {
            case 1:{
                cin >> name >> mark;
                m[name]+=mark;
                break;
            }
            case 2:{
                cin >> name;
                m.erase(name);
                break;
            }
            case 3:{
                cin >> name;
                cout << m[name] << endl;
                break;
            }
        
        }
    }
    return 0;
}
