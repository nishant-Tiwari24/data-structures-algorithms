#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int arr[], int n) {
    int s = 0;
    int e = n-1;
    while(s<=e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main() {
    int arr[5] = {2,3,4,5,6};
    reverse(arr,5);

}