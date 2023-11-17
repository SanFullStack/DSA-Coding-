#include<bits/stdc++.h>
using namespace std;
void findMedian(int a[], int b[], int n)
{
	int i=0;
	int j=n-1;
	while(a[j]>b[i] && i<n && j>-1)
	{
		swap(a[j--],b[i++]);
	}
	
	sort(a,a+n);
	sort(b,b+n);
	
	int median = (a[n-1] + b[0])/2;
	cout<<median;
}

int main()
{
	int a[] = {1, 12, 15, 26, 38};
	int b[] = {2, 13, 17, 30, 45};
	int n = sizeof(a)/sizeof(a[0]);
	
	findMedian(a,b,n);
	return 0;
}