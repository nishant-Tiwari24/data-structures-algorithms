#include <iostream>
using namespace std;

int main() {
    int i = 1;
    for( ; ; ) {
        if (i<=n) {
            cout<<i<<" ";
        }
        else break; // brings out of the loop
        i++;
    }

    for(int a=0, int b=1; a>=0 && b>=1; a--, b--) {
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}