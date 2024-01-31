#include<iostream>
using namespace std;

bool sorted(int * arr[],int n) {
    if(n==0 || n==1) return 1;
    if(arr[0] > arr[1]) return false;
    return sorted(arr+1,n-1);
}