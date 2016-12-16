#include <stdio.h>
using namespace std;

void longIncSub(int arr[], int n)
{
	int temparr[n];
	int i;
	for(i=0;i<n;i++)
	{
		temparr[i] = 1;
	}
	
	int j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			if(arr[j] < arr[i] && temparr[i] < temparr[j]+1 )
			{
				temparr[i] = temparr[j] +1;
			}
		}
	}
	
	int max = -1;
	for(i=0;i<n;i++)
	{
		if(max < temparr[i])
		{
			max = temparr[i];
		}
	}
	
	printf("%d", max);
}

int main()
{
	int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	longIncSub(arr, n);
	return 0;
}
