#include<bits/stdc++.h>
using namespace std;
bool disjointArr(int a[], int b[], int n, int m)
{
	int i=0; int j=0;
	
	while ( i<m && j<n)
	{
		if ( a[i] > b[j] )
		{
			j++;
		}
		else if (a[i] < b[j] )
		{
			i++;
		}
		else if ( a[i] == b[j] )
		{
			return 0;
		}
	}
	return 1;
	
	/*for ( int i=0; i<n; i++ )
	{
		for ( int j=0; j<m; j++ )
		{
			if ( a[i] == b[j] )
			{
				return 0;
			}
		}
	}
	return 1;*/
}

int main()
{
	int a[] = {10, 20, 30, 65};
	int b[] = {20, 63, 54, 23, 45};
	
	int n = sizeof(a)/sizeof(a[0]);
	int m = sizeof(b)/sizeof(b[0]);
	
	sort(a, a+n);
	sort(b, b+n);
	
	if (disjointArr(a, b, n, m))
	{
		cout<<"Disjoint";
	}
	
	else
	{
		cout<<"NOT";
	}
    
    return 0;
}