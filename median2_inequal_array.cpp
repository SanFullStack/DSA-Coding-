#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {2, 6, 7, 8};
	int b[] = {10, 12, 17, 18, 90, 91};
	int m = sizeof(a)/sizeof(a[0]);
	int n = sizeof(b)/sizeof(b[0]);
	
	int c[m+n];
	int j=0;
	
	for ( int i=0; i<m; i++ )
	{
		c[j++] = a[i];
	}
	
	for ( int i=0; i<n; i++ )
	{
		c[j++] = b[i];
	}
	
	sort(c,c+(m+n));
	
	int median;
	
	if ( (n+m)%2 == 0 )
	{
		median = ( c[(m+n)/2] + c[(m+n)/2-1] ) / 2;
	}
	
	else
	{
		median = c[(m+n)/2];
	}
	
	cout<<median;
	return 0;
}