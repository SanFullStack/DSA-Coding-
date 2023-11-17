#include<iostream>
using namespace std;
int findSum(int a[], int n, int sum)
{
	int min_length = INT_MAX;
	
	for ( int i=0; i<n; i++ )
	{
		int cur_sum = a[i];
		if (cur_sum>sum)
		{
			return 1;
		}
		for ( int j= i+1; j<n; j++ )
		{
			cur_sum += a[j];
			if ( cur_sum>sum && min_length>(j-i+1) )
			{
				min_length = j-i+1;
			}
		}
	}
	return min_length;
}

int main()
{
	//int a[] = {1, 2, 3, 4, 5};
	int a[] = {1, 4, 0, 0, 2, 6, 3};
	int n = sizeof(a)/sizeof(a[0]);
	int sum = 6;
	
	if (findSum(a,n,sum)==INT_MAX)
	{
		cout<<"No subarray found";
	}
	else
	{
		cout<<findSum(a,n,sum);
	}
	
	return 0;
}