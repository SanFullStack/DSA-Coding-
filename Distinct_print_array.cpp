#include<iostream>
using namespace std;
int main()
{
	
	int arr[] = {20, 30, 10, 2, 10, 20, 30, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int visited[n];
    //int count_dis=0;
    
    for( int i=0; i<n; i++ )
	{
		if ( visited[i] != 1 )
		{
			int count_dis =1;
			for ( int j=i+1; j<n; j++ )
			{
				if ( arr[i] == arr[j] )
				{
					count_dis++;
					visited[j] =1;
				}
			}
			if ( count_dis == 1 )
			{
				cout<< arr[i] <<" ";
			}
		}		
	} 
	 
    return 0;
}