#include<bits/stdc++.h>
using namespace std;
void CountOccurance( int *arr, int size )
{
	
	sort (arr, arr+size );
	for ( int i=0; i<size; i++ )
	{
		int count = 1;
		while ( i<size-1 && arr[i] == arr[i+1] )
		{
			count++;
			i++;
		}
		cout<<arr[i]<<" "<<count<<endl;
	}
}
int main()
{
	int arr[] = {5, 8, 5, 7, 8, 10};
	int size = sizeof(arr)/sizeof(arr[0]);
	CountOccurance(arr, size);
	return 0;
}