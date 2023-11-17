#include<iostream>
using namespace std;
int main()
{
	int row =3;
	int col=3;
	int a[row][col];
	
	for( int i=0; i<row; i++ )
	{
		for( int j=0; j<col; j++ )
		{
			cin>>a[i][j];
		}
	}
	
	int i=0;
	int j=col-1;
	int search=5;
	int flag=0;
	
	while( i<row && j>=0 )
	{
		if ( a[i][j]==search )
		{
			flag=1;
			cout<<search<<" Found at position ("<<i<<" , "<<j<<")";
			j--;
		}
		else
		{
			i++;
		}
	}
	
	if ( flag == 0 )
	{
		cout<<"element no found";
	}
	
	return 0;
}