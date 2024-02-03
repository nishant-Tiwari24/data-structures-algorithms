#include<iostream>
using namespace std;

int pivot(int arr[], int s, int e) {
    int p = arr[s];int count=0;
    for(int i=s+1;i<=e;i++) {
        if(arr[i] <= p) count++;
    }
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);
    int i=s;int j=e;
    while(i<pivotIndex && j>pivotIndex) {
        while(arr[i]<=p) i++;
        while(arr[j]>p) j--;
        if(i<pivotIndex&&j>pivotIndex) swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    if(s>=e) return;
    int p = pivot(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr,p+1,e);
}

int main() {
    int arr[5] = {4,3,5,2,9};
    int n = 5;
    quickSort(arr,0,n-1);
    for(int i=0; i<n;  i++) cout << arr[i] << " ";
}