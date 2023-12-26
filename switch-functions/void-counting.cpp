#include <iostream>
using namespace std;

void counting(int n) {
    int i = 0;
    while(n>0) {
        cout<<i<<endl;
        i++;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    counting(n);
    return 0;
}