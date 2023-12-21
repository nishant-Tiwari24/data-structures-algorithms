#include <iostream>
using namespace std;

int main() {
    int n = 50;
    int sum = 0;
    int i = 0;

    while(i<n) {
        sum = sum + i;
        i = i + 2;
    }
    cout<<sum<<endl;
    return 0;
}