#include<iostream>
using namespace std;
void findDivisors(int n, int x)
{
	for ( int i=1; i<=n; i++ )
	{
		int count=0;
		for ( int j=1; j<=i; j++ )
		{
			if ( i%j==0 )
			{
				count++;
			}
		}
		
		if( count>=x )
		{
			cout<<i<<endl;
		}
	}
}

int main()
{
	int n=7;
	int x=3;
	findDivisors(n,x);
	return 0;
}