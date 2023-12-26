#include <iostream>
using namespace std;

int power(int a,int b) {
    int result = 1;
    while (b > 0) {
        result *= a;
    }
    return result;
}

int main() {
    int a = 5, b = 10;
    cout << "The value of x is: " << power(a,b) << endl;
}