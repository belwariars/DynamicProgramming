#include <bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}

void minCostPath(int cost[3][3], int n, int m)
{
	int k[3][3];
	int i,j;
//	int a =0;
	k[0][0] = cost[0][0];
	for(i=1;i<n;i++)
	{
		k[i][0] = k[i-1][0] + cost[i][0];
		//a = k[i][0];
	}
	//a=0;
	for(j=1;j<m;j++)
	{
		k[0][j] = k[0][j-1] + cost[0][j];
		//a = k[0][j];
	}
	
	for(i=1; i<m; i++)
	{
		for(j=1; j<n; j++)
		{
			k[i][j] = cost[i][j] + min(k[i-1][j-1], k[i-1][j], k[i][j-1]);
		}
	}
	
	printf("%d", k[n-1][m-1]);
}

int main()
{
	int cost[3][3] = {{1, 2, 3}, {4, 8, 2}, {1, 5, 3}};
	minCostPath(cost, 3, 3);
	return 0;
}
