#include<iostream>
using namespace std;
int main()
{
	int arr[50] = {28,88,45,76,69,2,100};
	int size = sizeof(arr)/sizeof(arr[0]);
	int mini = arr[0];
	int maxi = INT_MIN;
	
	for ( int i=0; i<size; i++ )
	{
		/*if ( arr[i] < mini  )
		{
			mini = arr[i];
		}*/
		if ( arr[i] > maxi)
		{
			maxi = arr[i];
    	}
	}
	for ( int i=0; i<size; i++ )
	{
		if ( arr[i] < mini  )
		{
			mini = arr[i];
		}
    } 
	cout<<"LArgest "<<maxi<<endl;;
	cout<<"SMallest "<<mini;
	
	return 0;
}