#include <iostream>
using namespace std;

int& update2(int a) {                                //bad practice
    a++;
}

int main() {
    int n = 5;
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;
}