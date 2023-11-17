#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {7, 3, 2, 4, 9, 12, 56} ;
	int n = sizeof(a)/sizeof(a[0]);
	int students = 3;
	int mini = INT_MAX;
	
	sort(a, a+n);
	
	for ( int i=0; (i+students-1)<n; i++ )
	{
		int diff = a[i+students-1] - a[i];
		if ( diff<mini )
		{
			mini = diff;
		}
	}
	
	cout<<mini;
	return 0;
}