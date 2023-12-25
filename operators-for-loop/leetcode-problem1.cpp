#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rem = 0;
    int sum = 0;
    int pro = 1;
    
    while(n!=0) {
        rem = n % 10;
        n = n/10;
        
        sum=sum + rem;
        pro = pro*rem;
    }
    
    cout<<"Diffrence of sum and product is : "<<pro -  sum<<endl;
    
}