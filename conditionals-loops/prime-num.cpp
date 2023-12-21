#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i = 2;
    int flag = 0;

    while(i < n) {
        if(n%i == 0) {
            flag = flag + 1;
        }
        else {
            flag = 0;
        }
        i = i + 1;
    }

    if(flag >= 1) {
        cout<<"Not a prime number"<<endl;
    }
    else {
        cout<<"a Prime number"<<endl;
    }
    return 0;
}