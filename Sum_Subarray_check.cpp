#include<iostream>
using namespace std;
int main()
{
	int a[] = {-3, 2, 3, 1, 6, -3};
	int n = sizeof(a)/sizeof(a[0]);
	
	int flag=0;
	int sum=0;
	
	for ( int i=0; i<n; i++ )
	{
		//sum=0;
		for ( int j=i; j<n; j++)
		{
			sum += a[j];
			if ( sum == 0 )
			{
				flag = 1;
				break;
			}
		}
	}
	
	if ( flag == 1 )
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}