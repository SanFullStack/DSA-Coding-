#include<bits/stdc++.h>
using namespace std;
void SortHalfArray(int arr[], int size)
{
	//int temp;
	for ( int i=0; i<size-1; i++ )
	{
		for ( int j=0; j<size/2; j++ )
		{
			if ( arr[j] > arr[j+1] )
			{
				swap(arr[j], arr[j+1]);
				/*temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;*/
			}
		}
		
		for ( int j=size/2; j<size-1; j++)
		{
			if ( arr[j] < arr[j+1] )
			{
				swap(arr[j],arr[j+1] );
				/*temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;*/
			}
		}
	}
	
	for ( int i=0; i<size; i++ )
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[] = {56,89,41,20,77,100,69};
	int size = sizeof(arr)/sizeof(arr[0]);
	SortHalfArray(arr, size);
	return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
void ascDecFunc(int a[], int n)
{
   int temp;
   for(int i=0;i < n-1;i++)
   {
     for(int j = 0;j < n/2; j++) 
	 { 
	 if(a[j]>a[j+1])
           {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
      }

      for(int j = n/2;j < n-1; j++)
      {
          if(a[j] < a[j+1])
          {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
          }
      }
   }

   for(int i = 0; i < n; i++)
      cout<<a[i]<<" ";
}

int main()
{
    int arr[] = {3, 2, 4, 1, 10, 30, 40, 20};
    int len = sizeof(arr) / sizeof(arr[0]);
    ascDecFunc(arr, len);

    return 0;
}*/