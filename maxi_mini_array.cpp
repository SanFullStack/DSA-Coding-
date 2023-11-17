#include<iostream>
using namespace std;
int main()
{
	int a[] = {22,100,546,22,25346,80,1,6456};
	int n = sizeof(a)/sizeof(a[0]);
	int maxi = INT_MIN;
	int mini = INT_MAX;
	
	
	for ( int i=0; i<n; i++ )
	{
		if (a[i] > maxi )
		{
			maxi = a[i];
		}
		else if ( a[i] < mini )
		{
			mini = a[i];
		}
	}
	
	cout<<"GREATEST = "<<maxi<<endl;
	cout<<"smallest = "<<mini;
	return 0;
}