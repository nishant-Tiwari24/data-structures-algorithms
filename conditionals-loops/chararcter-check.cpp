#include <iostream>
using namespace std;

int main() {
    int ch;
    cout<<"Enter the character: ";
    cin>>ch;

    if(ch>='a' && ch<='z') {
        cout<<"Char is in lowercase"<<endl;
    }

    else if(ch>='A' && ch<='Z') {
        cout<<"Char is in uppercase"<<endl;
    }

    else if(ch>='0' && ch<='9') {
        cout<<"Char is a number"<<endl;
    }
    
return 0;
}