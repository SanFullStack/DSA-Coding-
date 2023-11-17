#include<iostream>
using namespace std;
bool isSorted(int arr[], int size )
{
	if ( size ==0 || size == 1 )
	{
		return true;
	}
	if ( arr[0] > arr[1] )
	{
		return false;
	}
	else
	{
		return isSorted(arr+1, size-1);
	}	
	
}
int main()
{
	int size;
	cin>>size;
	int arr[10]= { 2,4,5,6,7,8,9,10,11,1};
	bool t = isSorted(arr,size);
	if (t)
	{
		cout<<"Array is Sorted";
	}
	else
	{
		cout<<"Array is not sorted";
	}
	return 0;
}