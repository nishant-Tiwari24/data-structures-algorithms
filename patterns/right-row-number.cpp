#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;

    while(i<=n) {
        int j = 1;
        int row = i;
        while(j<=i) {
            cout<<row<<" ";
            row = row + 1;
        j = j + 1;    
        }
    i = i + 1;
    }
return 0;
}