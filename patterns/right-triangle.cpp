#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j = n - i + 1; // or j = 1;
        while(j<=n) {      // j < = i
            cout<<"*"<<" ";
            j = j + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
    return 0;
}