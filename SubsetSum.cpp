#include <bits/stdc++.h>
using namespace std;

void subsetSum(int set[], int sum, int n)
{
	int i,j;
	
	int k[n+1][sum+1];
	for(i=0; i<=sum; i++)
	{
		k[0][i] = 0;
	}
	
	for(j=0; j<=n; j++)
	{
		k[j][0] = 1;
	}
	
	for(i=1; i<=sum; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(set[j-1] < i)
			{
				k[j][i] = k[j-1][i];
			}
			
			else
			{
				if(k[j-1][i]==1 || k[j-1][i-set[j-1]] == 1)
				{
					k[j][i] = 1;
				}
				
				else
				{
					k[j][i] = 0;
				}
			}
		}
	}
	
	if(k[n][sum] == 1)
	{
		printf("yes");
	}
	
	else
	{
		printf("no");
	}
}

int main()
{
	int set[] = {3, 34, 4, 12, 5, 2};
	int sum = 9;
	int n = sizeof(set)/sizeof(set[0]);
	subsetSum(set, sum, n);
	return 0;
}
