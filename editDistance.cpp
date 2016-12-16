#include <bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
    return min(min(x, y), z);
}

void editDistance(char ch1[], char ch2[], int n, int m)
{
	int k[n+1][m+1];
	int i,j;
	
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=m; j++)
		{
			if(i==0)
			{
				k[i][j] = j;
			}
			
			else if(j==0)
			{
				k[i][j] = i;
			}
			
			else if(ch1[i-1] == ch2[j-1])
			{
				k[i][j] = k[i-1][j-1];
			}
			
			else
			{
				k[i][j] = 1 + min(k[i-1][j], k[i][j-1], k[i-1][j-1]);
			}
		}
	}
	
	printf("%d", k[n][m]);
}

int main()
{
	char ch1[] = "sunday";
	char ch2[] = "saturday";
	int n = strlen(ch1);
	int m = strlen(ch2);
	
	editDistance(ch1, ch2, n, m);
	return 0;
}
