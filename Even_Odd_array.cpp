#include<bits/stdc++.h>
using namespace std;
int main()
{
	//int arr[] = {2, 6, 45, 11, 9, 10, 24};
	int arr[] = {1, 7, 8, 4, 5, 16, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int even = 0;
	int odd = 0;
	
	for ( int i=0; i<n; i++ )
	{
		if ( arr[i]%2==0 )
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	
	cout<<"EVEN = "<<even<<endl;
	cout<<"ODD = "<<odd<<endl;
	return 0;
}