#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin >> a ;
    cin >> b ;
    int size_a = a.size();
    int size_b = b.size();
    
    cout << size_a << " " << size_b << "\n" ;
    cout << a+b << "\n";
    
    char one = a[0];
    char two = b[0];
    
    a[0] = two;
    b[0] = one;
    
    cout << a << " " << b;
  
    return 0;
}