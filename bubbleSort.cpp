#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {56,89,41,20,77,100,69};
	int size = sizeof(arr)/sizeof(arr[0]);
	//cout<<"ELE";
	for ( int i=0; i<size-1; i++ )
	{
		//bool swapped = false;
		for ( int j=0; i<size-i-1; j++ )
		{
			if ( arr[j] > arr[j+1] )
			{
				swap(arr[j],arr[j+1]);
				//swapped = true;
			}
		}
		/*if ( swapped == false )
		{
			break;
		}*/
	}
	cout<<"Elements after sorting"<<endl;
	for ( int i=0; i<size; i++ )
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}