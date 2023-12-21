#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int i = 0;
    int count = 0;

    while(i <= n) {
        int j = 0; // initialize inside
        while(j <= n) {
            cout<<count<<" ";
            count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
return 0;
}