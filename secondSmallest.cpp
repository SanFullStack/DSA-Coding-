#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {45,56,78,42,10,99};
	int size = sizeof(arr)/sizeof(arr[0]);
	int mini = *min_element(arr, arr+size);
	int sec_mini = INT_MAX;
	for ( int i=0; i<size; i++ )
	{
		if ( arr[i] != mini && arr[i] < sec_mini )
		{
			sec_mini = arr[i];
		}
	}
	cout<<"Second Smallest "<<sec_mini;
	return 0;
}
