#include <iostream>
using namespace std;

int main() {
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    name[2] = '\0';
    cout<<name;
    return 0;

}