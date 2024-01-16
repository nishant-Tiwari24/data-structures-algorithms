#include <iostream> 
#include <vector>

int first(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int m = e + (s-e)/2;
    while (s <= e) {
      if (k == arr[m]) {
          ans = m;
          e = m - 1;
      }
      else if (k < arr[m]) {
          e = m - 1;
      }
      else {
          s = m + 1;
      }
      m = e + (s-e)/2;
    }
    return ans;
    
}


int last(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int m = e + (s-e)/2;
    while (s <= e) {
      if (k == arr[m]) {
          ans = m;
          s = m + 1;
      }
      else if (k < arr[m]) {
          e = m - 1;
      }
      else {
          s = m + 1;
      }
      m = e + (s-e)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first = first(arr, n, k);
    p.second = last(arr, n, k);
    return p;
}