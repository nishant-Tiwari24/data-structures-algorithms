#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter the value of a : "<<endl;

    if(a<0) {
        cout<<"a is a negative number"<<endl;
    }
    else {
        if(a==0) {
            cout<<"value of a is zero"<<endl;
        }
        else {
            cout<<"A is a positive numner"<<endl;
        }
    }
    return 0;
}

// replaced by else-if conditions