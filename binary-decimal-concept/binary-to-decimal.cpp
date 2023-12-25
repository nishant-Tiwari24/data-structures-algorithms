#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int i = 0;
    int ans = 0;
    int bit;

    while (n!=0)
    {
        bit = n & 1;
        if(bit == 1) {
            ans = ans + pow(2,i);
        }
        n = n>>1;
        i++;
    }
    return 0;
}