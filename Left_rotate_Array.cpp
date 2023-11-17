#include<iostream>
using namespace std;
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	int k=3;
	int temp[n];
	int d=0;
	
	for ( int i=k; i<n; i++ )
	{
		temp[d++] = a[i];
	}
	
	for ( int i=0; i<k; i++ )
	{
		temp[d++] = a[i];
	}
	
	for ( int i=0; i<n; i++ )
	{
		cout<<temp[i]<<" ";
	}
	
	return 0;
}