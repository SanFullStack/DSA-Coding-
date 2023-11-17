#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n)
{
	if ( n==0 || n==1 )
	{
		return false;
	}
	
	for ( int i=2; i<=sqrt(n); i++ )
	{
		if ( n%i== 0)
		{
			return false;
		}
	}
	return true;
}

void sumofPrime(int n)
{
	for ( int i=1; i<=n/2; i++ )
	{
		if(isprime(i))
		{
			if(isprime(n-i))
			{
				cout<<i<<" + "<<n-i<<endl;
			}
		}
	}
}

int main()
{
	int n=10;
	sumofPrime(n);
	return 0;
}