#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int i = 1;
    while(i <= n) {
        int space = 1;
        int j = 1;
        while(space <= n) {
            cout<<" "<<" ";
            space = space + 1;
        }

        while(j <= i) {
            cout<<j<<" ";
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}