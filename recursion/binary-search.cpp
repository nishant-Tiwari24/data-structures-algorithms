#include <iostream>
using namespace std;

bool search(int arr[],  int n, int x, int s, int e) { 
    int s=0; int e=n-1;
    if(s>e) return false;  
    int m = s+(e-s)/2;
    if(arr[m] == x) return true;
    else if(arr[m] > x) search(arr, n, x,s, m-1);
    search(arr, n, x,m+1,e);
}