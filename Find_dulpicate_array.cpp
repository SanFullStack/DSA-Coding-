#include<bits/stdc++.h>
using namespace std;
int main()
{
	//int a[] = {1,6,2,5,1,4,6};
	int a[] = {20, 30, 10, 2, 10, 20, 30, 11};
	int n = sizeof(a)/sizeof(a[0]);
	
	sort(a, a+n);
	for ( int i=0; i<n; i++ )
	{
		if (a[i]==a[i+1])
		{
			cout<<a[i]<<" ";
		}
	}
	
	return 0;
}