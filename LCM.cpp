#include<iostream>
using namespace std;
int FindGCD(int a, int b)
{
	if ( a==0 )
	{
		return b;
	}
	if ( b==0 )
	{
		return a;
	}
	if ( a==b )
	{
		return a;
	}
	if ( a>b )
	{
		return FindGCD(a-b, b);
	}
	else
	{
		return FindGCD(a, b-a);
	}
}

int main()
{
	int a=24;
	int b=36;
	int gcd = FindGCD(a,b);
	int lcm = (a*b)/gcd;
	cout<<"LCM "<<lcm;
	return 0;
}