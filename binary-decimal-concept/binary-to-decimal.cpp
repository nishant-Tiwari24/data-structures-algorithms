#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i = 0;
    int ans = 0;
    int bit;

    while (n!=0)
    {
        bit = n % 10;
        if(bit == 1) {
            ans = ans + pow(2,i);
        }
        n = n / 10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}