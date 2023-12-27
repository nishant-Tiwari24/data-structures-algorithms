#include <iostream>
#include <algorithm>
using namespace std;

int swapAlternate(int arr[], int size) {
    for(int i = 0; i< size; i+=2) {
        if(i+1 > size) {
            swap(a[i], a[i+1]);
        }
    }
    return arr;
}
