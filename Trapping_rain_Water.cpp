#include<iostream>
using namespace std;
void trapMaxWater(int a[], int n)
{
	//for storing the max water
	int res =0 ;
	
	for ( int i=1; i<n-1; i++ )
	{		
		//for finding the max capacity for left side
		int left = a[i];
		for ( int j=0; j<i; j++ )
		{
			left = max(left, a[j]);
		}
		
		//for finding the max capacity for right side
		int right = a[i];
		for ( int j=i+1; j<n; j++ )
		{
			right = max(right,a[j]);
		}
		
		//update the max water
		res = res + ( min(right,left) - a[i] );
	}
	
	cout<<res;
}

int main()
{
	//int a[] = {3, 0, 2, 0, 4};
	int a[] = {1, 0, 3, 0, 4, 0, 2};
	int n = sizeof(a)/sizeof(a[0]);
	trapMaxWater(a,n);
	return 0;
}