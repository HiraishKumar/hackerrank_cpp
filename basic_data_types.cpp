#include <iostream>
#include <cstdio>
using namespace std;

// Input (stdin)
//     3 12345678912345 a 334.23 14049.30493

// Expected Output
//     3
//     12345678912345
//     a
//     334.230
//     14049.304930000


int main() {
    // Complete the code.
    int a ;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a ,&b ,&c ,&d ,&e);
    printf("%d \n",a);
    printf("%ld \n",b);
    printf("%c \n",c);
    printf("%f \n",d);
    printf("%lf \n",e);
    return 0;
}
