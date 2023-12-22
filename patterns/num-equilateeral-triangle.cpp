#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Ente the number of rows";
    cin>>n;

    int i = 1;
    while(i <= n) {
        int spaces = n - i;
        while(spaces) {
            cout << " ";
            spaces = spaces - 1;
        }

        int j = 1;
        while(j <= n) {
            cout << j;
            j = j + 1;
        }

        int k = i - 1;
        while(k) {
            cout << k;
            k = k - 1;

        }
    cout<<endl;
    i = i + 1;
    }
return 0;
}