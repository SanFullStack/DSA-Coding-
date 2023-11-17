#include<iostream>
using namespace std;
void deciTOhexa(int n)
{
	int hexa[100];
	int pos = 0;
	int rem;
	
	while ( n!=0 )
	{
		rem = n%16;
		
		if ( rem<10 )
		{
			hexa[pos] = rem + 48;
			pos++;
		}
		else
		{
			hexa[pos] = rem + 55;
			pos++;
		}
		n=n/16; 
	}
	
	for ( int i=pos-1; i>=0; i-- )
	{
		cout<<hexa[i];
	}
}
int main()
{
	int n = 1254;
	deciTOhexa(n);
	return 0;
}