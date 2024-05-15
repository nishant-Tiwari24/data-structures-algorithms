#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bucketSort(vector<double>& arr) {
    int n = arr.size();
    vector<vector<double>> bucket(n);
    
    for(int i=0; i<n; i++) {
        int idx = n* arr[i];
        bucket[idx].push_back(arr[i]);
    }
    
    for(int i=0; i<n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }
    
    int index = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<bucket[i].size(); j++) {
            arr[index++] = bucket[i][j];
        }
    }
}

int main() {
    vector<double> arr = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};

    cout << "Original array: ";
    for (double val : arr) {
        cout << val << " ";
    }
    cout << endl;

    bucketSort(arr);

    cout << "Sorted array: ";
    for (double val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

