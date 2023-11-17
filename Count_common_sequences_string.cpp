#include<iostream>
using namespace std;
int countSequences(string a, string b)
{
	int m = a.length();
	int n = b.length();
	int count[m+1][n+1];
	
	for ( int i=0; i<m; i++ )
	{
		for ( int j=0 ; j<n; j++ )
		{
			count[i][j] = 0;
		}
	}
	
	for ( int i=1; i<=m; i++ )
	{
		for ( int j=1; j<=n; j++ )
		{
			if ( a[i-1] == b[j-1] )
			{
				count[i][j] = 1 + count[i][j-1] + count[i-1][j];
			}
			else
			{
				count[i][j] = count[i][j-1] + count[i-1][j] - count[i-1][j-1];
			}
		}
	}
	
	return count[m][n];
}

int main()
{
	string a = "PREP";
	string b = "PREPINSTA";
	
	cout<<"No of common sequences "<<countSequences(a, b);
	
	return 0;
}