#include<bits/stdc++.h>
using namespace std;
void threePartition(int a[], int n, int low, int high)
{
	int j = 0;
	int k = n-1;
	for ( int i=0; i<=k; )
	{
		if (a[i]<low)
		{
			swap(a[j++],a[i++]);
		}
		else if (a[i]>high)
		{
			swap(a[i++],a[k--]);
		}
		else
		{
			i++;
		}
	}
	
	
}

int main()
{
	int a[] = {2, 89, 34, 16, 17, 10, 11, 78, 30, 19};
	int n = sizeof(a)/sizeof(a[0]);
	int low=15;
	int high = 25;
	
	threePartition(a,n,low,high);
	
	for ( int i=0; i<n; i++ )
	{
		cout<<a[i]<<" ";
	}
	return 0;
}