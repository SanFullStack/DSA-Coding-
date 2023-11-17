#include<bits/stdc++.h>
using namespace std;
#include<vector>
int findLongestConseqSubseq(int arr[], int n)
{
	sort(arr, arr+n);
	int ans =0;
	int count=0;
	
	vector<int>v;
	v.push_back(arr[0]);
	
	for ( int i=1; i<n; i++ )
	{
		if ( arr[i] != arr[i-1] )
		{
			v.push_back(arr[i]);
		}
	}
	
	for ( int i=0; i<v.size(); i++ )
	{
		if ( i>0 && v[i]==v[i-1] + 1)
		{
			count++;
		}
		else
		{
			count=1;
		}
		ans = max (count, ans);
	}
	return ans;
}

int main()
{
    int arr[] = { 1, 2, 2, 3 };
    int n = sizeof arr / sizeof arr[0];
    cout << "Length of the Longest contiguous subsequence is "<< findLongestConseqSubseq(arr, n);
    return 0;
}