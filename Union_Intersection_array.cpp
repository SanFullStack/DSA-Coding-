#include<iostream>
using namespace std;
void printUnion(int a[], int b[], int m, int n)
{
	int i=0;
	int j=0;
	
	while ( i<m && j<n )
	{
		if ( a[i]<b[j] )
		{
			cout<<a[i++]<<" ";
		}
		else if ( a[i]>b[j] )
		{
			cout<<b[j++]<<" ";
		}
		else
		{
			cout<<a[i++]<<" ";
			j++;
		}
	}
	
	while ( i<m )
	{
		cout<<a[i++]<<" ";
	}
	
	while ( j<n )
	{
		cout<<b[j++]<<" ";
	}
	
	cout<<endl;	
}

void printIntersection(int a[], int b[], int m, int n)
{
	int i=0;
	int j=0;
	
	while ( i<m && j<n )
	{
		if ( a[i]<b[j] )
		{
			i++;
		}
		else if ( a[i]>b[j] )
		{
			j++;
		}
		else
		{
			cout<<a[i++]<<" ";
			j++;
		}
	}	
}

int main()
{
	int a[] = {1,3,5,7,9};
	int b[] = {2,3,4,5,6,7,8};
	int m = sizeof(a)/sizeof(a[0]);
	int n = sizeof(b)/sizeof(b[0]);
	
	printUnion(a,b,m,n);
	printIntersection(a,b,m,n);
	
	return 0;
}