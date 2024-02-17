#include <iostream>
using namespace std;

int count(int x) {
    return __builtin_popcount(x);
}

int count(long long x) {
    return __builtin_popcountll(x);
}