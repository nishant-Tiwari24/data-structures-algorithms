#include <string>
#include <iostream>

using namespace std;

string insertCommas(int num) {
    string str = to_string(num);
    int n = str.size();
    int commas = (n - 1) / 3;

    // Create a reversed string
    string reversedStr;
    for (int i = n - 1; i >= 0; i--) {
        reversedStr.push_back(str[i]);
    }

    // Insert commas into the reversed string
    for (int i = 1; i <= commas; i++) {
        reversedStr.insert(i * 4 - 1, ",");
    }

    // Reverse the reversed string to get the final result
    string result;
    for (int i = reversedStr.size() - 1; i >= 0; i--) {
        result.push_back(reversedStr[i]);
    }

    return result;
}

int main() {
    int num = 123456789;
    cout << insertCommas(num) <<
