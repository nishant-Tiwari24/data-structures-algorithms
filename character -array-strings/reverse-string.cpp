#include <iostream>
#include <algorithm>
using namespace std;

int reverse(char arr[], int n) {
    int s = 0, e = n-1;
    while (s <= e) {
        swap(arr[s++],arr[e--]);
    }
}