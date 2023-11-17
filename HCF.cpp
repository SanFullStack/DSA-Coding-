#include<iostream>
using namespace std;
int main()
{
	int a=98;
	int b=56;
	
	while(a!=b)
	{
		if ( a>b )
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	
	cout<<"HCF "<<a;
	return 0;
}