#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j = n;
        while(j) {
            cout<<j<<" ";
            j = j - 1;
        }

        int k = 1;
        while(k<=i) {
            cout<<"*"<<" ";
            k = k + 1;
        }

        int l = i - 1;
        while(l) {
            cout <<"*"<<" ";
            l = l - 1;

        }

        int m = n;
        int count = m;
        while(m) {
            cout<<count<<" ";
            count = count - 1;
            m = m - 1;
        }
        i = i + 1;
    }
    cout<<endl;
    return 0;
}