#include <iostream>
using namespace std;

void update(int a) {
    a++;
}

void update2(int &a) {  //refrence
    a++;
}

int main() {
    int n = 5;
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;
}