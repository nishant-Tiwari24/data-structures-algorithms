#include <bits/stdc++.h> 
void reverse(string &str, int i, int j) {
	if(i>j) 
		return;
	swap(str[i],str[j]);
	i++;
	j--;
	reverse(str, i, j);
}

string reverseString(string str)
{
	int i=0; int j=str.length() - 1;
	reverse(str,i,j);
	return str;
}