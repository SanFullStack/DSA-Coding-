#include<iostream>
using namespace std;
int main()
{
	int row=4;
	int col=4;
	int a[row][col];
	
	//taking input
	for( int i=0; i<row; i++ )
	{
		for ( int j=0; i<col; j++)
		{
			cin>>a[i][j];
		}
	} 
	
	int left = 0;
	int right = col-1;
	int top = 0;
	int bottom = row-1;
	
	while( top<=bottom && left<=right )
	{
		//top row
		for( int i=left; i<=right; i++ )
		{
			cout<<a[top][i]<<" ";
		}
		top++;
		
		//right row
		for ( int i=top; i<=bottom; i++ )
		{
			cout<<a[i][right]<<" ";
		}
		right--;
		
		//bottom row
		if( top<=bottom )
		{
			for ( int i=right; i>=left; i-- )
			{
				cout<<a[bottom][i]<<" ";
			}
			bottom--;
		}
		
		//left row
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