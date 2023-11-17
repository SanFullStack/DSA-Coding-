#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"N";
	cin>>n;
	int k;
	cout<<"K";
	cin>>k;
	int arr[n];
	for ( int i=0; i<n; i++ )
	{
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	cout<<"K th minimum element is "<<arr[k-1]<<endl;
	cout<<"K th maximum element is "<<arr[n-k]<<endl;
	
	return 0;
}