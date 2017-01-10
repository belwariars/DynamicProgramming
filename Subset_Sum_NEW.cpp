// SUBSET - SUM PROBLEM...
// SEE TUSHAR-ROY'S VIDEO...AND GEEKSFORGEEKS BOTH...FOR BOTH THE NEXT FOR LOOPS
#include <bits/stdc++.h>
using namespace std;

void subsetSum(int set[], int n, int sum)
{
	int table[n+1][sum+1];
	int i,j;
	
	for(i=0; i<=n; i++)
	{
		table[i][0] = 1; // THE SUM = 0 FOR EVERY SUBSET THAT IS AN EMPTY SET
	}
	
	for(j=1; j<=sum; j++)
	{
		table[0][j] = 0; // WHERN SET IS EMPTY, WE CAN'T REACH ANY OTHER SUM THAN 0..SO FALSE IN ALL OTHER CASES EXCEPT table[0][0]
	}
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=sum; j++)
		{
			if(set[i-1] > j)
			{
				table[i][j] = table[i-1][j];
			}
			else
			{
				if(table[i-1][j] == 1 || table[i-1][j-set[i-1]] == 1)
				{
					table[i][j] = 1;
				}
				else
				{
					table[i][j] = 0;
				}
			}
		}
	}
	
	if(table[n][sum])
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}

int main()
{
	int set[] = {2, 3, 7, 8, 10};
	int sum = 11;
	
	int n =sizeof(set)/sizeof(set[0]);
	
	subsetSum(set, n, sum);
	return 0;
}
