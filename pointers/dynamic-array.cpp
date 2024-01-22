#include <iostream>
using namespace std;

int main() {
    char ch = 'a';
    cout<< sizeof(ch)<< endl;
    char *c = &ch;
    cout<<sizeof(c)<<endl;

    int n = 5;
    int * arr = new int[5];     //variable size array
    for (int i=0 ;i<n ;i++) {
        arr[i] = i+1;
    }
}