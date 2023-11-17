#include<iostream>
using namespace std;
void maxProfit(int prices[], int n)
{
	int max_sp[n];
	int maxi = INT_MIN;
	
	//constructing max_sp
	for ( int i=n-1; i>=0; i-- )
	{
		if ( prices[i]>maxi )
		{
			maxi = prices[i];
			max_sp[i] = INT_MIN;
		}
		else
		{
			max_sp[i] = maxi;
		}
	}
	
	int profit =0;
	for ( int i=0; i<n; i++ )
	{
		if ( max_sp[i] != INT_MIN )
		{
			profit = max(profit, max_sp[i] - prices[i]);
		}
	}
	
	cout<<profit;
}

int main()
{
	int prices[] = {7,1,5,3,6,4};
	int n= sizeof(prices)/sizeof(prices[0]);	
	maxProfit(prices,n);
	return 0;
}