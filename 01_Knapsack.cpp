#include <bits/stdc++.h>
using namespace std;

//int max(int a, int b) { return (a > b)? a : b; }

void knapsack(int val[], int wt[], int W, int n)
{
	int k[n+1][W+1];
	int i;
	int w;
	
	for(i=0; i<=n; i++)
	{
		for(w=0; w<=W; w++)
		{
			if(i==0 || w==0)
			{
				k[i][w] = 0;
			}
			
			else if(wt[i-1] > w)
			{
				k[i][w] = k[i-1][w];
			}
			
			else
			{
				k[i][w] = max(k[i-1][w], val[i-1] + k[i-1][w-wt[i-1]]);
					
				
			}
		}
	}
	
	printf("%d", k[n][W]);
}

int main()
{
	int val[] = {60, 100, 120};
	int wt[] = {10, 20, 30};
	int W = 50;
	int n = sizeof(val)/sizeof(val[0]);
	
	knapsack(val, wt, W, n);
	return 0;
}
