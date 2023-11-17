#include<iostream>
#include<math.h>
using namespace std;
void HexaTOdec(string hex)
{
	int lenn = hex.size();
	int digit=0;
	int j=0;
	for ( int i=lenn-1; i>=0; i-- )
	{
		if ( hex[i]>='0' && hex[i]<='9' )
		{
			int rem = hex[i] -'0';
			digit += rem * (pow(16,j));
			j++;
		}
		
		else if ( hex[i]>='A' && hex[i]<='F' )
		{
			int rem = int(hex[i]) - 55;
			digit += rem * (pow(16,j));
			j++;
		}
	}
	
	cout<<digit;
}

int main()
{
	string hex;
	getline(cin, hex);
	HexaTOdec(hex);
	return 0;
}