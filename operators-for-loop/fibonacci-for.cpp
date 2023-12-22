#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;

    cout<<a<<" "<<b;
    for(int i = 0; i<n; i++) {
        int nextnum = a + b;
        cout<<nextnum<<" ";
        a = b;
        b = nextnum;

    }
    return 0;
}