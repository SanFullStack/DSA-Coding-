#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	int k=3;
	int temp[n];
	
	for ( int i=0; i<n; i++ )
	{
		temp[ (i+k)%n ] = a[i];
	}
	
//	copy(temp, temp+n, a);
	
	for ( int i=0; i<n; i++ )
	{
		cout<<temp[i]<<" ";
	}
	
	return 0;
}