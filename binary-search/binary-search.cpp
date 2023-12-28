#include <iostream>
using namespace std;

bool search(int arr[], int n, int target) {
    int start = 0;
    int end = n -  1;

    int  mid = (start + end)/2;

    while (start<=end)
    {
        if(mid == target) {
            return true;
        }
        else if(target < mid) {
            end = mid - 1;
            mid = (start + end)/2;
        }
        else {
            start = mid + 1;
            mid = (start + end)/2;
        }
    }
    return false;
    
}

int main() {
    int arr[10] = {2,3,4,5,6,7,8,9,10,12};
    search(arr,10,4);
}