#include <iostream>
using namespace std;

int getmaxocc(string s) {
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++) {
        int num = 0;
        num = arr[i] - 'a';
        arr[num]++;
    }

    int maxi = -1;
    int ans = 0;
    for(int i=0; i<26; i++) {
        if(maxi> arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    return ans + 'a';
}