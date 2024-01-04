int getPivot(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e-s)/2;

    while(s<=e) {
        if(arr[m]>=arr[0]) {
            s = m + 1;
        }
        else {
            e = m;
        }
        m = s + (e-s)/2;
    }
    return s;
}

int bsearch(vector<int>& arr,int s, int n, int k) {
    int start = s;
    int end = n -  1;

    int  mid = (start + end)/2;

    while (start<=end)
    {
        if(mid == k) {
            return k;
        }
        else if(k < mid) {
            end = mid - 1;
            mid = (start + end)/2;
        }
        else {
            start = mid + 1;
            mid = (start + end)/2;
        }
    }
    return -1;
    
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr);
    if(k >= arr[pivot] && k <= arr[n-1] {
        return bsearch(arr,pivot, n-1, k);
    }
    else {
        return bsearch(arr, 0, pivot - 1 , k);
    }
}

