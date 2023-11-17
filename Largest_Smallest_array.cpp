#include<iostream>
using namespace std;
int main()
{
	int arr[] = {2,88,45,76,69,23,100};
	int size = sizeof(arr)/sizeof(arr[0]);
	int mini = INT_MAX;
	int maxi = INT_MIN;
	
	for ( int i=0; i<size; i++ )
	{
		if ( arr[i] > maxi )
		{
			maxi = arr[i];
		}
		else if ( arr[i] < mini )
		{
			mini = arr[i];
    	}
	}

	cout<<"LArgest "<<maxi<<endl;;
	cout<<"SMallest "<<mini;
	
	return 0;
}