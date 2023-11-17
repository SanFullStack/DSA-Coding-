#include<iostream>
using namespace std;
void subset(string str, int a[], int i, int n)
{
	if(n==0)
	{
		cout<<str<<endl;
		return ;
	}
	subset(str+a[i], a, i+1, n-1);
	subset(str, a, i+1, n-1);
}

int main()
{
	int a[]={1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	string str=" ";
	subset(str,a,0,n);
	return 0;
}