#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n=4;
    int mat[n][n]= { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
    
    for ( int i=0; i<n; i++ )
    {
    	for ( int j=0; j<=i; j++ )
    	{
    		swap( mat[i][j], mat[j][i] );
		}
	}
	
	for ( int i=0; i<n; i++ )
	{
		reverse(mat[i], mat[i]+n);
	}
	
	for ( int i=0; i<n; i++ )
	{
		for ( int j=0; j<n; j++ )
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}