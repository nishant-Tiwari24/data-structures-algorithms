#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
    if(i>j) return 0;
    if(str[i] != str[j]) return false;
    return checkPalindrome(str,i++,j--);
}