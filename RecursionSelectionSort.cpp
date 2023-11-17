#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n )
{
	if ( n==0 || n==1 )
	{
		return;
	}
	
	for ( int i=0; i<n-1; i++ )
	{
		int minIndex = i;
		for ( int j=i+1; j<n; j++ )
		{
			if ( arr[j] < arr[minIndex] )
			{
				minIndex = j;
			}
		}
		
	}
}
int main()
{
	int n;
	int arr[10];
	cin>>n;
	
	for ( int i=0; i<n; i++ )
	{
		cin>>arr[i];
	}
	
	SelectionSort(arr,n);
	
	for ( int i=0; i<n; i++ )
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}