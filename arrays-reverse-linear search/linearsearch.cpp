#include <iostream>
using namespace std;

bool search(int a[], int size, int key) {
    for (int i = 0; i < size - 1; ++i) {
        if (a[i] == key) 
            return true;
    }
    return false;
}

int main() {
    int size;
    cout << "Enter the number of elements in array: ";
    cin>>size;
    int a[size], key;

    cout<<"Enter elements of array: \n";
    for (int i=0; i<size; i++) {
        cin >> a[i];
    }
    cout << "\nEnter element to be searched: ";
    cin >> key;
    
    (search(a, size, key));
}

