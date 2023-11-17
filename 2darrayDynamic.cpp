#include<iostream>
using namespace std;
int main ()
{
	int row;
	cin>>row;
	int col;
	//cin>>col;
	int sizes[]={0};	
	
	//creating of 2d array dynamically
	int **arr = new int *[row];
	for ( int i=0; i<row; i++)
	{	
	    // FOR JAGGERED ARRAY	
	    cin>>col;
	    sizes[i] = col;
	    *(arr + i) = new int[sizes[i]];
//		arr[i] = new int[col];
	}
	
	//taking input
	int num=1;
	for ( int  i=0; i<row; i++ )
	{
		for ( int j=0; j<sizes[i]; j++ )
		{
			cin>>arr[i][j];
		}
	}
	
	//showing output
	for ( int i=0; i<row; i++) 
	{
		for ( int j=0 ;j<sizes[i]; j++)
		{
			cout<<arr[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	
	//releasing memory
	for ( int i=0; i<row; i++ )
	{
		delete []arr[i];
	}
	delete[]arr;
	return 0;
}