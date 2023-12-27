#include <iostream>
using namespace std;

int reverse(int a[],int n) {
    int start = 0, end = n-1;
    while (start < end) {
        swap(start, end);
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    reverse(arr,n);
    return 0;
}