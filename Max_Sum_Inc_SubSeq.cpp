// MAXIMUM SUM INCREASING SUBSEQUENCE

#include <bits/stdc++.h>
using namespace std;

void maxIncSumSub(int arr[], int n)
{
	int max[n];
	
	int i,j;
	
	for(i=0; i<n; i++)
	{
		max[i] = arr[i];
	}
	
	for(i=1; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			if(arr[j] < arr[i])
			{
				if(max[j] + arr[i] > max[i])
				{
					max[i] = max[j] + arr[i];
				}
			}
		}
	}
	
	int maximum = INT_MIN;
	for(i=0; i<n; i++)
	{
		if(max[i] > maximum)
		{
			maximum = max[i];
		}
	}
	
	printf("Maximum Sum Inc. SubSeq:  %d", maximum);
}

int main()
{
	int arr[] = {1, 101, 2, 3, 100, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	maxIncSumSub(arr, n);
	
	return 0;
}
