#include<iostream>
using namespace std;
int findLargest(int arr[], int si)
{
	int max = INT_MIN;
	for (int i=0; i<si; i++ )
	{
		if ( arr[i] > max )
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
	int n = findLargest(arr,si);
	cout <<"Largest eleemnt in the array : "<< n; 
	return 0;	
}