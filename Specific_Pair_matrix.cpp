#include<iostream>
using namespace std;
# define N 5
void specificPair(int mat[][N])
{
	int maxvalue = INT_MIN;
	
	for ( int i=0; i<N-1; i++)
	{
		for ( int j=0; j<N-1; j++ )
		{
			for ( int k=i+1; k<N; k++)
			{
				for ( int l=j+1; l<N; l++)
				{
					if ( maxvalue < (mat[k][l] - mat[i][j]) )
					{
						maxvalue = mat[k][l] - mat[i][j];
					}
				}
			}
		}
	}
	
	cout<<maxvalue;
}

int main()
{
	int mat[N][N] = {
                { 1, 2, -1, -4, -20 },
                { -8, -3, 4, 2, 1 },
                { 3, 8, 6, 1, 3 },
                { -4, -1, 1, 7, -6 },
                { 0, -4, 10, -5, 1 }
            };
            
    specificPair(mat);
    return 0;
}