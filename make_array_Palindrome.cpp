#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {1, 4, 5, 9, 1};
	int n = sizeof(a)/sizeof(a[0]);
	
	int i=0;
	int j=n-1;
	int count=0;
	
	while(i<=j)
	{
		if ( a[i]==a[j] )
		{
			i++;
			j--;
		}
		else if ( a[i]>a[j] )
		{
			a[j-1]=a[j]+a[j-1];
			j--;
			count++;
		}
		else
		{
			a[i+1]=a[i]+a[i+1];
			i++;
			count++;
		}
	}
	
	cout<<count;
	return 0;
}