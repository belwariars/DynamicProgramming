// ROD CUTTING PROBLEM...

#include <bits/stdc++.h>
using namespace std;

void rodCutting(int arr[], int n)
{
	int table[n+1][n+1];
	int i,j;
	
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=n; j++)
		{
			if(i==0 || j==0)
			{
				table[i][j] = 0;
			}
			else
			{
				if(i > j)
				{
					table[i][j] = table[i-1][j];
				}
				else
				{
					table[i][j] = max(table[i-1][j], table[i][j-i] + arr[i-1]);
				}
			}
		}
	}
	
	printf("%d", table[n][n]);
}

int main()
{
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    rodCutting(arr, size);
	return 0;
}
