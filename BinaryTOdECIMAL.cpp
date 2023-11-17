#include<iostream>
#include<math.h>
using namespace std;
int BinaryTODecimal(int n)
{
	int temp = n;
	int i=0;
	int digit=0;
	while ( temp!=0 )
	{
		int rem = temp%10;
		digit += rem * (pow(2,i));
		temp = temp/10;
		i++;
	}
	return digit;
}
int main()
{
	int n = 11011;
	int digit = BinaryTODecimal(n);
	cout<<"Binary to Decimal "<<digit;
	return 0;
}
