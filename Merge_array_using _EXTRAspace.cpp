#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int m, int n)
{
	int k=0;
	int c[m+n];
	
	for ( int i=0; i<m; i++ )
	{
		c[k++] = a[i];
	}
	
	/*for ( int i=0; i<n; i++ )
	{
		c[k++] = b[i];
	}*/
	
	int j=0;
	while (j<n)
	{
		c[k++] = b[j++];
	}
	
	sort(c, c+k);
	
	//printing whole array
	for ( int i=0; i<k; i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	
	//breaking the whole array into 2
	k=0;
	for ( int i=0; i<m; i++ )
	{
		cout<<c[k++]<<" ";
	}
	
	cout<<endl;
	for ( int i=0; i<n; i++ )
	{
		cout<<c[k++]<<" ";
	}
}

int main()
{
	int a[] = {1, 5, 9, 10, 15, 20 };
	int b[] ={2, 3, 8, 13};
	
	int m = sizeof(a)/sizeof(a[0]);
	int n = sizeof(b)/sizeof(b[0]);
	
	merge(a,b,m,n);
	return 0;
}