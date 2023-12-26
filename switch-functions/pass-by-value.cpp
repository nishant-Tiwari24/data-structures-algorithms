#include <iostream>
using namespace std;

int dummy(int n) {
    return n++;
}

int main() {
    int n;
    cin>>n;
    dummy(n);
    cout<<n<<endl;
}