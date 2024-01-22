#include <iostream>
using namespace std;

int inline max(int &a, int &b) {
    return (a > b)? a : b;
}

int main() {
    int a = 1;
    int b = 5;
    cout<<max(a,b)<<endl;
}