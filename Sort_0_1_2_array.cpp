#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for ( int i=0; i<n; i++ )
	{
		cin>>arr[i];
	}
	
	int count_0, count_1, count_2 =0;
	for ( int i=0; i<n; i++ )
	{
		if ( arr[i]==0 )
		{
			count_0++;
		}
		else if ( arr[i]==1 )
		{
			count_1++;
		}
		else
		{
			count_2++;
		}
	} 
	
	int i=0;
	while(count_0--)
	{
		arr[i++] = 0;
	}
	while(count_1--)
	{
		arr[i++] = 1;
	}
	while(count_2--)
	{
		arr[i++] = 2;
	}
	
	for ( int i=0; i<n; i++ )
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}