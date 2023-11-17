#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{	
	for ( int i=0; i<n-1; i++ )
	{
		int minIndex = i;
		for ( int j=i; j<n-1; j++ )
		{
			if ( arr[j] < arr[minIndex] )
			{
		        minIndex = j;
			}			
		}
		swap (arr[minIndex], arr[i]);
	}	
	Print(arr, n);
}

void Print(int arr[], int n)
{
	for ( int i=0; i<n; i++ )
	{
		cout<<arr[i];
	}
}

int main ()
{
	int arr[6] = { 4,7,1,67,33,10};
	cout << selectionSort(arr, 6);
	return 0;
}