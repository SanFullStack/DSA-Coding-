#include<iostream>
using namespace std;
#define MAX 500
int multiply( int i, int res[], int res_size )
{
	int carry =0;
	for ( int j=0; j<res_size; j++ )
	{
		int product = res[j] * i + carry;
		res[j] = product%10;
		carry = product/10;
	}
	
	while (carry)
	{
		res[res_size] = carry%10;
		carry /= 10;
		res_size++;
	}
	
	return res_size;
}

void factorial(int n)
{
	int res[MAX];
	res[0] = 1;
	int res_size = 1;
	
	for ( int i=2; i<=n; i++ )
	{
		res_size = multiply(i, res, res_size);
	}
	
	cout<<"Factorial : \n";
	for( int i=res_size-1; i>=0; i-- )
	{
		cout<<res[i];
	}
}



int main()
{
	int n = 100;
	factorial(n);
	return 0;
}