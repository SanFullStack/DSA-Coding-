#include <iostream>
using namespace std;

void printarr(int arr[], int size)
{
	for ( int i=0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
}

void swap_alt( int arr[], int size )
{
	int a[15],b[15];
	for ( int i=0; i<size; i+=2; j=0; j++ )
	{
		a[j] = arr[i+1];
		a[j+1] = arr[i];
	}
	
	printarr(arr,size);
}

int main()
{
	int a[20];
	int i, n;
	
	cout << "Enter the size of the Array : " << endl;
	cin >> n;
	
	for ( i=0; i<n; i++)
	{
		cin >> a[i];
	}
	
	swap_alt(a,n);
	return 0;
}