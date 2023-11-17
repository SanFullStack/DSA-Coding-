#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {20, 30, 10, 2, 10, 20, 30, 11, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr, arr+n);
    
    /*for ( int i=0; i<n; i++ )
    {
    	int flag =0;
    	while ( i<n-1 && arr[i] == arr[i+1] )
    	{
    		flag =1;
    		i++;
		}
		if ( flag )
		{
			cout<<arr[i-1]<<" ";
		}
		//cout<<arr[i-1]<<" ";
	}*/
	
	for( int i=0; i<n; i++ )
	{
		if( arr[i]==arr[i+1] )
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}