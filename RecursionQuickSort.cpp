#include<iostream>
using namespace std;
int Partition(int arr[], int s, int e)
{
	int pivot = arr[s];
	
	//counting the pivot position
	int count=0;
	for ( int i=s+1; i<=e; i++ )
	{
		if ( arr[i] <= pivot )
		{
			count++;
		}
	}
	
	//place pivot at right position
	int pivotIndex = s + count;
	swap ( arr[pivotIndex], arr[s] );
	
	// left and right part sorting
	int i=s;
	int j=e;
	
	while( i < pivotIndex && j > pivotIndex )
	{
		while ( arr[i]<=pivot )
		{
			i++;
		}
		while ( arr[j]>pivot ) 
		{
			j--;
		}
		if ( i<pivotIndex && j>pivotIndex )
		{
			swap(arr[i++], arr[j--]);
		}
	}
	
	return pivotIndex;
}

void QuickSort(int arr[], int s, int e)
{
	if ( s>=e )
	{
		return;
	}
	
	int p = Partition (arr, s, e);
	
	//left part
	QuickSort(arr, s, p-1);
	
	//RightPart
	QuickSort(arr, p+1, e);
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
	
	QuickSort(arr, 0, n-1);
	
	for ( int i=0; i<n; i++ )
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}