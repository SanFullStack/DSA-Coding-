#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
	int temp;
	temp = n;
	int rem;
	int rev=0;
	while ( temp!=0 )
		{
			rem = temp%10;
			rev = rev*10 + rem;
			temp = temp/10;
		}
	if ( rev == n )
	{
		return 1;
	}
	return 0;
}
int main()
{
	int arr[] = {1, 121, 55551, 545545, 10111, 90};
	int size = sizeof(arr)/sizeof(arr[0]);
	int res = INT_MIN;
	
	sort(arr, arr +size);
	
	for ( int i=size-1; i>=0; i-- )
	{
		if ( isPalindrome(arr[i]) && (arr[i] > res) )
		{
			res = arr[i];
			break;
		}
	}
	
	//if (res==INT_MIN);
	//{
	//	res = -1;
	//}
	
	cout<<res;
	return 0;
}