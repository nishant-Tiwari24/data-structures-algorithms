#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i = 1;

    while(i<=n) {
        int j = 1;
        while(j<=i) {
            char val = 96 + i;
            cout<<val<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}