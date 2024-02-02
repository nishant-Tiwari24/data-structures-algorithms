#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {
    int m = s + (e-s)/2;
    int l1 = m-s+1;
    int l2 = e-m;
    int *f = new int [l1];
    int *s = new int [l2];

    int k=s;
    for(int i=0; i<l1; i++) {
        f[i] =  arr[k++]; 
    }
    k=m+1;
    for(int i=0; i<l2; i++) {
        s[i] = arr[k++];
    }
    int i1 = 0;
    int i2 = 0;
    int main = s;
    while(i1<l1 && i2<l2) {
        if(f[i1]<s[i2])
    }

}

void mergeSort(int arr[], int s, int e) {
    if(s>e) return;
    int m = s + (e-s)/2;
    mergeSort(arr,s,m);
    mergeSort(arr,m+1,e);
    merge(arr,s,e);
}