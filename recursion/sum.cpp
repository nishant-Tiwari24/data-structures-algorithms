#include <iostream>
using namespace std;

int sum(int arr[],int n) {
    if(n==0) return 0;
    if(n == 1) return arr[0];
    return arr[0] + sum(arr + 1, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sum(arr, size);

    cout << "Sum of array elements: " << result << endl;

    return 0;
}