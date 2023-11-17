#include<bits/stdc++.h>
using namespace std;
int main()
{
	int mat[4][4] = { { 10, 20, 30, 40 }, { 15, 25, 35, 45 }, { 25, 29, 37, 48 }, { 32, 33, 39, 50 } };
    int k=7;
    
    int n=4;
    int a[n*n];
    int l=0;
    
    for ( int i=0; i<n; i++ )
    {
    	for ( int j=0; j<n; j++ )
    	{
    		a[l++] = mat[i][j];
		}
	}
	
	sort(a, a+(n*n));
	cout<<"Kth smallest element "<<a[k-1]<<endl;
	cout<<"Kth largest element "<<a[l-k];
	return 0;
}