#include<iostream>
using namespace std;
int main()
{
	int arr[] = {12,98,10,14,23,56};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for ( int i=size-1; i>=0; i-- )
	{
		cout<<arr[i]<<";";
	}
	
	return 0;
}