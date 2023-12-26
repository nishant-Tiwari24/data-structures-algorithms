#include <iostream>
using namespace std;

int fact(int r) {
    if(r == 0) {
        return 1;
    }
    int res = 1;
    
    for(int i = 1; i<=r; i++) {
        res *= i;
    }
    return res;
}

int nCr(int n, int r) {
    return fact(n)/(fact(n-r) * fact(r));
}

int main() {
    int n;
    cin >> n;
    int r;
    cin >> r;
    cout<<nCr(n,r);
    return 0;
}