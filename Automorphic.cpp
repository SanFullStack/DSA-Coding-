#include<iostream>
using namespace std;
bool isAutomorphic(int n)
{
	int sq = n*n;
	while ( n!=0 )
	{
		if ( n%10 != sq%10 )
		{
			return 0;
		}
		n=n/10;
		sq=sq/10;
	}
	return 1;
}

int main()
{
	int n = 376;
	if (isAutomorphic(n) )
	{
		cout<<"Automorphic no ";
	}
	else
	{
		cout<<"NOt";
	}
	return 0;
}