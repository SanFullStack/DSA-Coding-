#include<iostream>
using namespace std;
int main()
{
	int arr[] = {2, 4, 5, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum;
	int result = INT_MAX;
	int diff;
	
	for (int i=0; i<n; i++ )
	{
		sum = 0;
		for ( int j=0; j<n; j++ )
		{
			diff = arr[i] - arr[j];
			
			if ( diff<0 )
			{
				sum += -diff;
			}
			
			else
			{
				sum += diff;
			}
		}
		
		if ( sum < result )
		{
			result = sum;
		}
	}
	
	cout<<"Minimum absolute difference sum is = "<<result;
	return 0;
}