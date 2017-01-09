// COIN CHANGING PROBLEM...
// MAXIMUM NUMBER OF WAYS WE CAN GET THE TOTAL COIN VALUE...

#include <bits/stdc++.h>
using namespace std;

void coinChanging(int coins[], int n, int l)
{
	int table[l+1][n+1];
	
	int i,j;
	
	for(i=0; i<=l; i++)
	{
		table[i][0] = 1;
	}
	
	for(j=1; j<=n; j++)
	{
		table[1][j] = 1;
	}
	
	for(i=2; i<=l; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(coins[i-1] > j)
			{
				table[i][j] = table[i-1][j];
			}
			else
			{
				table[i][j] = table[i-1][j] + table[i][j-coins[i-1]];
			}
			
			printf("table[%d][%d] = %d\n", i, j, table[i][j]);
		}
	}
	
	printf("%d", table[l][n]);
}

int main()
{
	int coins[] = {1, 2, 3};
	int n = 4;
	
	int l = sizeof(coins)/sizeof(coins[0]);
	
	coinChanging(coins, n, l);
	return 0;
}
