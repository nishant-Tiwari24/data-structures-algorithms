#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {
    int m = s + (e - s) / 2;
    int l1 = m - s + 1;
    int l2 = e - m;
    int *first = new int[l1];
    int *second = new int[l2];

    int mainArr = s;
    for (int i = 0; i < l1; i++) {
        first[i] = arr[mainArr++];
    }
    mainArr = m + 1;
    for (int i = 0; i < l2; i++) {
        second[i] = arr[mainArr++];
    }

    int i1 = 0;
    int i2 = 0;
    mainArr = s;
    while (i1 < l1 && i2 < l2) {
        if (first[i1] < second[i2]) {
            arr[mainArr++] = first[i1++];
        } else {
            arr[mainArr++] = second[i2++];
        }
    }
    while (i2 < l2) {
        arr[mainArr++] = second[i2++];
    }
    while (i1 < l1) {
        arr[mainArr++] = first[i1++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int s, int e) {
    if (s >= e) return;
    int m = s + (e - s) / 2;
    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);
    merge(arr, s, e);
}

int main() {
    int arr[5] = {2, 3, 1, 4, 5};
    int n = 5;

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
