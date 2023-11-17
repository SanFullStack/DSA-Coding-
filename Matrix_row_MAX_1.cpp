#include<iostream>
using namespace std;
int main()
{
	int mat[4][4] = { {0, 0, 0, 1}, {0, 1, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
	int n=4;
	int max_1 = 0;
	int index;
	
	for ( int i=0; i<n; i++ )
	{
		int count=0;
		for( int j=0; j<n; j++ )
		{
			if ( mat[i][j] == 1 )
			{
				count++;
			}
		}
		if ( count>max_1 )
		{
			max_1 = count;
			index = i;
		}
	}
	
	cout<<index+1;
	return 0;
}