// EGG DROPPING PUZZLE...

#include <bits/stdc++.h>
using namespace std;

void eggDropping(int n, int k)
{
	int table[n+1][k+1];
	int i,j,x;
	int res;
	for(i=0; i<=n; i++)
	{
		table[i][1] = 1;
		table[i][0] = 0;
	}
	
	for(j=1; j<=k; j++)
	{
		table[1][j] = j;
	}
	
	for(i=2; i<=n; i++)
	{
		for(j=2; j<=k; j++)
		{
			table[i][j] = INT_MAX;
			for(x=1; x<=j; x++)
			{
				res = 1 + max(table[i-1][x-1], table[i][j-x]);
				if(res < table[i][j])
				{
					table[i][j] = res;
				}
			}
		}
	}
	
	printf("%d", table[n][k]);
}

int main()
{
	int n = 2; // No. of EGGS
	int k = 36; // No. of floors
	
	eggDropping(n, k);
	return 0;
}
