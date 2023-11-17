#include<bits/stdc++.h>
using namespace std;
int main()
{
	//int mat[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int mat[3][3] = { {1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
	int a[9];
	int k=0;
	
	for ( int i=0; i<3; i++ )
	{
		for ( int j=0; j<3; j++ )
		{
			a[k++] = mat[i][j];
		}
	}
	
	sort(a,a+9);
	int median;
	cout<<"Median element is "<<a[4];
	return 0;
}

