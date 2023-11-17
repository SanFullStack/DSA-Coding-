#include<buts/stdc++.h>
using namespace std;
int main()
{
	int arr1[] = {1, 2, 6, 3, 7};
    int arr2[] = {10, 7, 45, 3, 7};
    int n = sizeof(arr1)/sizeof(arr1[0]);
	int product=0;
	
	sort(arr1, arr+n);
	sort(arr2, arr2+n);
	
	for ( int i=0; i<n; i++ )
	{
		product += arr1[i] * arr2[i];
	}
	
	cout<<"PRODUCT "<<product;
	
	return 0;
}