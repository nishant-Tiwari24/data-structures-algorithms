#include <bits/stdc++.h> 
vector<int> reverse(vector<int> arr) {
	int s = 0;
	int e = arr.size() - 1;
	while(s<=e) {
		swap(arr[s++],arr[e--]);
	}
	return arr;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;
	int j=m-1;
	vector<int> ans;
	int carry=0;

	while(i>=0 && j>=0) {
		int val1 = a[i];
		int val2 = b[j];
		int sum = val1 + val2 + carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		i--;
		j--;
	}

	while(i>=0) {
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		i--;

	}

	while(j>=0) {
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		j--;

	}

	while(carry) {
		int sum = carry;
		carry = sum/10;
		sum = sum %10;
		ans.push_back(sum);
	}

	return reverse(ans);


}