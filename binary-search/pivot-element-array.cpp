#include <iostream> 
using namespace std;

int pivot(int arr[],int n) {
    int s = 0;
    int e = s -1;
    int m = s + (e-s)/2;
    
    while(s<=e) {
        if(arr[m] >= arr[0]) {
            s = m + 1;
        }
        else {
            e = m;
        }
        m = s + (e - s)/2;
    }
    return s;
}