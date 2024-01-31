#include <iostream>
using namespace std;

void saydigit(int n) {
    if(n == 0) return;
    int dig = n%10;
    n/=10;
    saydigit(n);
    cout << dig << endl;
}