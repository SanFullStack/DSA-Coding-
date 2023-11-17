#include<iostream>
using namespace std;
int main()
{
	int col=4;
	int row=4;
	int a[row][col];
	
	for ( int i=0; i<row; i++ )
	{
		for ( int j=0; j<col; j++ )
		{
			cin>>a[i][j];
		}
	}
	
	int top = 0;
	int bottom = row-1;
	int left = 0;
	int right = col-1;
	
	while ( left<=right && top<=bottom )
	{
		for ( int i=left; i<=right; i++)
		{
			cout<<a[top][i]<<" ";
		}
		top++;
		
		for ( int i=top; i<=bottom; i++)
		{
			cout<<a[i][right]<<" ";			
		}
		right--;
		
		if ( top<=bottom )
		{
			for( int i=right; i>=left; i--)
			{
				cout<<a[bottom][i]<<" ";				
			}
			bottom--;
		}
		
		if ( left<=right )
		{
			for ( int i=bottom; i>=top; i-- )
			{
				cout<<a[i][left]<<" ";				
			}
			left++;
		}
	}
	
	return 0;
}