#include<iostream>
using namespace std;
int main()
{
	//int arr[] = { 10, -20, -30, 0, 70, -80, -20 };
	int arr[] = { 1, -2, -3, 0, 7, -8, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = arr[0];
	
	for ( int i=0; i<n; i++ )
	{
		int mul = arr[i];
		for ( int j=i+1; j<n; j++ )
		{
			if ( mul > result )
			{
				result = mul;
			}
			mul *= arr[j]; 
		}
		if ( mul > result )
		{
			result = mul;
		}
	}
	
	cout<<"Maximum product of sub array is "<<result;
	return 0;
}