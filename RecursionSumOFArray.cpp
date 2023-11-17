#include<iostream>
using namespace std;
void print(int arr[], int size)
{
	for ( int i=0; i<size; i++ )
	{
		cout<<arr[i]<< " ";
	}
	cout<<endl;
}

int SumArray(int arr[], int size)
{
	print (arr, size);
	if ( size == 0 )
	{
		return 0;
	}
	if ( size == 1 )
	{
		return arr[0];
	}
	
	int remainingPart = SumArray(arr+1, size-1);	
	int sum = arr[0] + remainingPart ;

	return sum;
}

int main ()
{
	int size = 5;
	int arr[5] = {1,2,3,4,5};
	int ans = SumArray(arr,size);
	cout<<endl;
	cout<<"Sum of the array "<<ans;
	return 0;
}