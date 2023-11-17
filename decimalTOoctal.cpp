#include<iostream>
using namespace std;
int decimalTOoctal(int n)
{
	int arr[32];
	int i=0;
	
	while(n!=0)
	{
		arr[i]=n%8;
		n=n/8;
		i++;
	}
	
	for ( int j=i-1; j>=0; j-- )
	{
		cout<<arr[j];
	}
}

int main()
{
	int n = 148;
	decimalTOoctal(n);
	return 0;
}