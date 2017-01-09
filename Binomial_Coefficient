#include <bits/stdc++.h>
using namespace std;

void binomialCoefficient(int n, int k)
{
	int table[n+1][k+1];
	int i,j;
	
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=min(i, k); j++)
		{
			if(j==0 || i==j)
			{
				table[i][j] = 1;
			}
			else
			{
				table[i][j] = table[i-1][j] + table[i-1][j-1];
			}
		}
	}
	
	printf("%d", table[n][k]);
}

int main()
{
	int n,k;
	n = 5;
	k=2;
	
	binomialCoefficient(n, k);
	return 0;
}
