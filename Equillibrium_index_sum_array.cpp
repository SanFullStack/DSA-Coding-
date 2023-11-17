#include<iostream>
using namespace std;
int findEquillibrium(int arr[], int n, int sum)
{
	//int sum =0;
	int leftsum=0;
	
	for ( int i=0; i<n; i++ )
	{
		sum -= arr[i];
		
		if ( leftsum==sum )
		{
			return i;
		}
		
		leftsum += arr[i];
	}
	
	return -1;
}

int main()
{
	int arr[]= {-7, 1, 5, 2, -4, 3, 0};
	int n= sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	
	for ( int i=0; i<n; i++ )
	{
		sum += arr[i];
	}
	
	int m = findEquillibrium(arr, n, sum);
	
	cout<<"Equillibrium Index "<<m;
	
	return 0;
}