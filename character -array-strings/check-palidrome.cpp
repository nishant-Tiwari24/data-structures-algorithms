#include <iostream>
using namespace std;

char toLowercase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch - ('A' - 'a');
    else
        return ch;
}

int checkPalindrome(char ch[], int n) {
    int s = 0;
    int e = n - 1;
    while(s<=e) {
        if(toLowercase(ch[s]) != toLowercase(ch[e]))
        return 0;
        else {
        s++;
        e--;
    }
    }
    
    return 1;
}