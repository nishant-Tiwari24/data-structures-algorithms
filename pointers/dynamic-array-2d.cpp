#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int m = 5;
    int** arr = new int*[n];

    for(int i=0; i<n; i++) {
        arr[i] = new int[m];
    }
}