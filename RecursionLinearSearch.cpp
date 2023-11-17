#include<iostream>
using namespace std;
bool isFound(int arr[], int size, int key )
{
	if ( size == 0 )
	{
		return false;
	}
	if ( arr[0] == key )
	{
		return true;
	}
	else
	{
		bool searchRemaining = isFound(arr+1, size-1, key);
		return searchRemaining;
	}
}
int main ()
{
	int size = 5; 
	int key = 3;
	int arr[5] = {2,4,6,8,10};
	bool ans = isFound(arr, size, key);
	if ( ans )
	{
		cout<<"Element found";
	}
	else
	{
		cout<<"Element not found";
	}
	return 0;
}