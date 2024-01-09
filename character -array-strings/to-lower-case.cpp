#include <iostream>
using namespace std;

char toLowercase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch - ('A' - 'a');
    else
        return ch;
}