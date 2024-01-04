#include <bits/stdc++.h> 

bool PossibleCount(vector<int> arr, int n, int m, int mid) {
	int student = 1;
	int pagesum = 0;

	for(int i =0; i<n ; i++) {
		if(pagesum + arr[i] <= mid) {
			pagesum += arr[i];
		}
		else {
		student++;
			if(student > m || arr[i] > mid) {
				return false;
			}
			pagesum = arr[i];
		}
	}
	return true;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int s = 0;
	int sum = 0;
	for(int i = 0; i < time.size(); i++) {
		sum +=time[i];
	}
	int e = sum;
	int mid = s + (e-s)/2;
	int ans = -1;

	while(s<=e) {
		if(PossibleCount(time,n,m,mid)) {
			ans = mid;
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}