#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool flag = 1;

    for(int i = 2; i<n; i++) {
        if(i%2 == 0) {
            flag = 0;
            break;
        }
    }

    if(flag = 0) {
        cout<<"not a prime number"<<endl;
    }
    else {
        cout<<"a prime number"<<endl;
    }

return 0;
}