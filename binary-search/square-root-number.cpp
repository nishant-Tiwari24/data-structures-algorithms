long long binarySearch(int n) {
    int s = 0;
    int e = n - 1;
    long long m = s + (e-s)/2;
    int ans = -1;

    while(s<=e) {
        if(m*m == n) {
            return m;
        }
        else if(m*m > n) {
            e = m - 1;
        }
        else {
            ans = m;
            s = m + 1;
        }
        m = s + (e - s)/2;
    }
    return ans;
}

int floorSqrt(int n)
{
    return binarySearch(n);
}
