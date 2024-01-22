#include <iostream>
using namespace std;

void update2(int a = 0) {  //default value
    a++;
}

int main() {
    int n = 5;
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;
}