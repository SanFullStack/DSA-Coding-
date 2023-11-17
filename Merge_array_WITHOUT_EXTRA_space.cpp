#include<bits/stdc++.h>
using namespace std;
void merge ( int a[], int b[], int m, int n)
{
	int k = m-1;
	int i=0;
	int j=0;
	while ( i<=k && j<n )
	{
		if (a[i]<b[j])
		{
			i++;
		}
		else
		{
			swap(b[j++],a[k--]);
		}
	}
	
	sort(a, a+m);
	sort(b, b+n);
}
int main()
{
	int a[] = { 1, 5, 9, 10, 15, 20 };
    int b[] = { 2, 3, 8, 13 };
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    
    merge(a,b,m,n);
    
    cout<<"arrays after merging wihtout using extra space "<<endl;
    
    for ( int i=0; i<m; i++ )
    {
    	cout<<a[i]<<" ";
	}
	cout<<endl;
	for ( int i=0; i<n; i++ )
	{
		cout<<b[i]<<" ";
	}
	
	return 0;
}