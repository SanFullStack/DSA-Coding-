#include<iostream>
#include<math.h>
using namespace std;
void PrimeFactor( int n )
{
	int count=0;
	for ( int i=2; i<n/2; i++ )
	{
		if ( n%i == 0 )
		{
			count++;
		}
	}
	if (count == 0 )
	{
		cout<<n<<" ";
	}
}

void Factors(int n)
{
	for ( int i=2; i<=n; i++)
	{
		if ( n%i == 0 )
		{
			PrimeFactor(i);
		}
	}
}

int main()
{
	int n = 1225;
	Factors(n);
	return 0;
}