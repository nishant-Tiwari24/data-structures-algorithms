#include <iostream>
using namespace std;

int maximum(int arr[],int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max; 
}

int minimum(int arr[], int size) {
    int min = INT_MAX;
    for (int i=0; i<size; i++)
    {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    maximum(arr,size);
    minimum(arr,size);
}