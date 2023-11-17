#include <iostream>
using namespace std;

int binarySearch( int arr[], int n, int key )
{
	int mid, start, end;
	start = 0;
	end = n-1;
	mid = start + ( end - start ) / 2;
	
	while ( start <= end )
	{
		if ( key == arr[mid] )
			{
				return mid;
			}
		
		if ( key > arr[mid] )
			{
				start = mid + 1;
			}
		
		else 
		{
			end = mid - 1;
		}
		
		mid = start + ( end - start ) / 2;
	}

	return -1;
	
}

int main ()
{
	
	int arr[50];
	int n, i, key;
	
	cout <<"Enter the size of the array " << endl;
	cin >> n;
	
	cout<< "Enter the elemenmts of the array " << endl;
	for ( i=0; i<n; i++ )
	{
		cin >> arr[i];
	}
	
	cout << "Enter the key element to be searched : " << endl;
	cin >> key;
	
	int index = binarySearch( arr, n, key );
	cout << "Index of " << key << " is :" << index ;
	return 0;	
}

