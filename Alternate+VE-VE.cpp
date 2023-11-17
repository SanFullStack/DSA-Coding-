#include<bits/stdc++.h>
using namespace std;
void rearrange( int a[], int n)
{
	int i=0;
	int j=n-1;
	
	while(i<j)
	{
		while( (i<=n-1) && (a[i]>0) )
		{
			i++;
		}
		while ( (j>=0) && (a[j]<0) )
		{
			j--;
		}
		if ( i<j )
		{
			swap(a[i], a[j]);
		}
	}
	
	if (i==0 || i==n )
	{
		return;
    }
	
	int k=0;
	while (k<n && i<n)
	{
		swap(a[k],a[i]);
		i += 1;
		k += 2;
	}
}

void printArray(int a[], int n)
{
	for( int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int a[] = { 2, 3, -4, -1, 6, -9 };
	int n = sizeof(a)/sizeof(a[0]);
	
	cout<<"Array before rearraging \n";
	printArray(a,n);
	
	rearrange(a,n);
	
	cout<<"\nArray after rearranging \n";
	printArray(a,n);
	
	return 0;
}