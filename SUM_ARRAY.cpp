#include<iostream>
using namespace std;
int main()
{
	int arr[] = {3,6,9,8,4,31,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	
	for ( int i=0; i<size; i++ )
	{
		sum += arr[i];
	}
	
	cout<<"SUM "<<sum;
	return 0;
}