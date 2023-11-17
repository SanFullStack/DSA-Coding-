#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=4;
	int m=4;
	int mat[n][m]= { { 1, 20, 43, 14 },{ 50, 69, 17, 81 },{ 99, 10, 11, 22 },{ 13, 54, 95, 16 } };
	int a[m*n];
	int k=0;
	
	for ( int i=0; i<m; i++ )
	{
		for ( int j=0; j<n; j++ )
		{
			a[k++] = mat[i][j];
		}
	}
	
	sort(a, a+(m*n));
	
	for ( int i=0; i<m*n; i++ )
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}