#include <iostream>
using namespace std;

int sum(int arr[],int n) {
    if(n == 0)
        return arr[0];
    return arr[n-1] + sum(arr + 1, n - 1);
}