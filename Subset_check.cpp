#include<bits/stdc++.h>
using namespace std;
bool subArray(int a[], int b[], int n, int m)
{
	int i;
	int j;
	for (  j=0; j<m; j++ )
	{
		for (  i=0; i<n; i++ )
		{
			if ( b[j] == a[i] )
			{
				break;
			}
		}
		if ( i==n )
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a[] = {10, 20, 80, 40, 30, 90};
	int b[] = {30, 20, 40, 10};
	
	int n = sizeof(a)/sizeof(a[0]);
	int m = sizeof(b)/sizeof(b[0]);
	
	sort(a, a+n);
	sort(b, b+m);
	
	if (subArray(a, b, n, m))
	{
		cout<<"B is a subset of A";
	}
	else
	{
		cout<<"NOT";
	}
	
	return 0;
}