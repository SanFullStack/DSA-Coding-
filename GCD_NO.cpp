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
   //return FindGCD(a, a-b);
}
int main()
{
	int a = 98;
	int b= 56;
	int gcd = FindGCD(a,b);
	cout<<"GCD "<<gcd;
	return 0;
}