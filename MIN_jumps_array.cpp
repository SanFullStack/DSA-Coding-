#include<bits/stdc++.h>
using namespace std;
int countJumps( int a[], int n)
{
	if ( n==0 || a[0]==0 )
	{
		return INT_MAX;
	}
	
	int jumps[n];
	jumps[0] = 0;
	
	for ( int i=1; i<n ; i++ )
	{
		jumps[i] = INT_MAX;
		for ( int j=0; j<n; j++ )
		{
			if ( i<=j + a[j] && jumps[j]!= INT_MAX )
			{
				jumps[i] = min(jumps[i], jumps[j]+1);
				break;
			}
		}
	}
	return jumps[n-1];
}

int main()
{
	int a[] = {1,3, 6, 1, 0, 9};
	int n = sizeof(a)/sizeof(a[0]);
	int m = countJumps(a, n);
	cout<<m;
	return 0;
}