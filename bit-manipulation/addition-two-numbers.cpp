#include <iostream>
using namespace std;

int set(int a,int b) {
    return (a^b) + 2(a&b);
}