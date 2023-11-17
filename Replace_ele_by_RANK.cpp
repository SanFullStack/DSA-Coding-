	#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {100, 2, 70, 12 , 90};
	int n = sizeof(a)/sizeof(a[0]);
	
	int temp[n];
	
	for( int i=0; i<n; i++ )
	{
		temp[i] = a[i];
	}
	
	sort(temp, temp+n);
	
	for ( int i=0; i<n; i++ )
	{
		for ( int j=0; j<n; j++ )
		{
			if ( temp[j]==a[i] )
			{
				a[i] = j+1;
				//break;
			}
		}
	}
	
	for ( int i=0; i<n; i++ )
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}