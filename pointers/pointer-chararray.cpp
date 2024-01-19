#include<iostream>
using namespace std;

int main() {
    char ch[9] = "computer";
    cout<< ch << endl; 
    char *c = &ch[0];
    cout<<c<<endl; //computer
    cout<<*c<<endl; //c
}