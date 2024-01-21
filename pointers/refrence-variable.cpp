#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int &j = i;
    j++;
    cout<<j<<endl;
}