#include <iostream>
using namespace std;

int counting(int n) {
    if(n == 0)
        return 1;
    return n + counting(n-1);
}