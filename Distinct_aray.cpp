#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {10, 30, 10, 20, 40, 20, 50, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int visited[n];
    int count=0;
    
    sort(arr, arr+n);
    /*for ( int i=0; i<n; i++ )
    {
    	if(visited[i] != 1)
    	{
    		for ( int j=i+1; j<n; j++ )
    		{
    			if ( arr[i] == arr[j] )
    			{
    				visited[j] =1;
				}
			}
			count++;
			cout<<arr[i]<<endl;
		}
	}
	cout<<endl;
	cout<<count;*/
	for( int i=0; i<n; i++ )
	{
		if( arr[i]!=arr[i+1] )
		{
			count++;
			cout<<arr[i]<<endl;
		}
	}
	
	cout<<endl<<count;
	return 0;
}