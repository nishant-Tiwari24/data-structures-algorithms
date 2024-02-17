#include <iostream>
using namespace std;

int set(int x,int y) {
    x = x^y;
    y = y^x;
    x = x^y;
}