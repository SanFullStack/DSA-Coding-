#include<iostream>
using namespace std;
int findSmallest(int arr[], int si)
{
	int max = INT_MAX;
	for (int i=0; i<si; i++ )
	{
		if ( arr[i] < max )
		{
			max = arr[i];
		}
	}
	return max;
}
int main ()
{
	int arr[]={55,7,66,10,99,45,20};
	int si = sizeof(arr)/sizeof(arr[0]);
	int n = findSmallest(arr,si);
	cout <<"Smallest eleemnt in the array : "<< n; 
	return 0;	
}