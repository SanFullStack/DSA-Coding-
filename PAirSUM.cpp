#include<iostream>
using namespace std;
void findPair(int a[], int n, int sum)
{
	int count =0;
	for ( int i=0; i<n; i++ )
	{
		for ( int j=i+1; j<n; j++ )
		{
			if ( a[i]+a[j] == sum )
			{
				cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
				count++;
			}
		}
	}
	
	cout<<"\n"<<count;
}

int main()
{
	int a[] = {10,12,10,15,-1,7,6,5,4,2,1,1,1};
	int n = sizeof(a)/sizeof(a[0]);
	
	int sum = 11;
	
	findPair(a,n,sum);
	return 0;
}