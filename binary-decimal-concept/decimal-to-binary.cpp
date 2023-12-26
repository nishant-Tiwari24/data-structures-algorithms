#include <iostream>
#include <cmath>
using namespace std;
   
int main() {
     int n;
     cin>>n;
     int dig;
     int ans = 0, i = 0;

     while(n!=0) {
        dig = n & 1;
        ans = (pow(10,i) * dig) + ans;
        n = n >> 1;
        i++;
     }
     cout<<ans<<endl;
}