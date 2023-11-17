#include<iostream>
using namespace std;
bool BinarySearch(int arr[], int s, int e, int key )
{
	
	if ( s > e )
	{
		return false;
	}
	
	int mid = (s+e)/2;
	
	if ( arr[mid] == key )
	{
	    return true;
	}
	
	if ( arr[mid] < key )
	{
		bool remainingSearch1 = BinarySearch(arr,mid+1,e,key);
		return remainingSearch1;
	}
	
	else
	{
		bool remainingSearch2 = BinarySearch(arr,s,mid-1,key);
		return remainingSearch2;
	}
	
}
int main ()
{
	int arr[6] = {2,3,4,5,6,7};
	int size = 6;
	int key = 7;
	int s = 0;
	int e = 6;
	//int mid = s + (e-s)/2;
	bool ans = BinarySearch(arr,s,e,key);
	if ( ans )
	{
		cout<<"Element Found";
	}
	else
	{
		cout<<"Element not Found";
	}
	return 0;
}