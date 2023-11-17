#include<iostream>
using namespace std;
int main()
{
	int arr[5][2];
	cout<<"Enter elements of the array "<<endl;
	for ( int i=0; i<5; i++ )
	{
		for ( int j=0; j<2; j++ )
		{
			cin>>arr[i][j];
		}
	}
	
	//symmetric elements in the array
	for ( int i=0; i<5; i++ )
	{
		for ( int j=i+1; j<5; j++ )
		{
			if ( arr[i][0]==arr[j][1] && arr[i][1] == arr[j][0] )
			{
				cout<<"("<<arr[i][0]<<","<<arr[i][1]<<")"<<" ";
			}
		}
	}
	return 0;
}