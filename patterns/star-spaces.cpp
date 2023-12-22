#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int i = 1;
    while(i <= n) {
        int j = n - i;
        while(j) {
            cout<<"*"<<" ";
            j = j + 1;
        }
        
        int spaces = 1;
        while(spaces <= i) {
            cout<<" "<<" ";
            spaces = spaces + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}