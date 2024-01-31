#include <iostream>
using namespace std;

int search(int arr[], int n, int target) {
    if(n == 0) return 0;
    if(target == arr[0]) return 1;
    search(arr + 1, n - 1, target);
}