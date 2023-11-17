#include<iostream>
using namespace std;
int main()
{
	int a[] = {1, 2, 2, 6, 6, 6, 6, 7, 9};
	int n = sizeof(a)/sizeof(a[0]);
	
	int k = 4;
	int x = n/k;
	
	
	for ( int i=0; i<n; i++ )
	{
		int count =1;
		if (a[i]!=-1)
		{
			for ( int j=i+1; j<n; j++ )
			{
				if (a[i]==a[j] )
				{
					count++;
					a[j]=-1;
				}
			}
			if (count>x )
		{
			cout<<a[i]<<" ";
		}
		}
		
		
	}
	
	return 0;
}