#include <iostream>
using namespace std;

int main() {
    int ch = '1';
    cout << "Enter a character: ";
    cin >> ch;

    switch(ch) {
        case '1': cout<<"first"<<endl;
                break;

        case 1: switch (ch)
        {
        case 'A': cout<<"nested value"<<endl;
            break;
        
        default:
            break;
        }
    }
}