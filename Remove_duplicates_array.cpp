#include<iostream>
using namespace std;
int removeDuplicate(int arr[], int n1)
{
	if (n1==0 || n1==1 )
	{
		return n1;
	}
	
	int j=0;
	
	for ( int i=0; i<n1; i++ )
	{
		if ( arr[i] != arr[i+1] )
		{
			arr[j++] = arr[i];
		}
	}
	
	//arr[j++] = arr[n1-1];
	return j;
}
int main()
{
	int arr[] = {10, 20, 20, 30, 40, 40, 40, 50, 50, 50, 60};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    
    int n = removeDuplicate(arr,n1);
    
    for ( int i=0; i<n; i++ )
    {
    	cout<<arr[i]<<" ";
	}
	
	return 0;
}