#include<iostream>
using namespace std;
void findCommon(int a[], int b[], int c[], int m, int n, int o)
{
	int i=0;
	int j=0;
	int k=0;
	
	while ( i<m && j<n && k<o )
	{
		if ( a[i]==b[j] && b[j]==c[k] )
		{
			cout<<a[i++]<<" ";
			j++;
			k++;
		}
		
		else if ( a[i]<b[j] )
		{
			i++;
		}
		
		else if ( b[j]<c[k] )
		{
			j++;
		}
		
		else
		{
			k++;
		}
	}	
}

int main()
{
	int a[] = {1,5,5};
	int b[] = {3,4,5,5,10};
	int c[] = {5,5,10,2};
	
	int m = sizeof(a)/sizeof(a[0]);
	int n = sizeof(b)/sizeof(b[0]);
	int o = sizeof(c)/sizeof(c[0]);
	
	findCommon(a,b,c,m,n,o);
	return 0;
}