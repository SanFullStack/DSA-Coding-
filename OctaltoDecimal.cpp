#include<iostream>
#include<math.h>
using namespace std;
int OctalDecimal(int n)
{
	int digit=0;
	int i=0;
	while ( n!=0 )
	{
		int rem = n%10;
		digit += rem * (pow(8,i));
		n=n/10;
		i++;
	}
	return digit;
}
int main()
{
	int n=462;
	int decimal = OctalDecimal(n);
	cout<<"OVtal to Decimal conversion "<<decimal;
	return 0;
}