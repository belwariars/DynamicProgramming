#include <bits/stdc++.h>
using namespace std;

void longComSeq(char X[], char Y[], int m, int n)
{
	int K[m+1][n+1];
	int i,j;
	
	for(i=0; i<=m; i++)
	{
		for(j=0; j<=n; j++)
		{
			if(i==0 || j==0)
			{
				K[i][j] = 0;
			}
			
			else if(X[i-1] == Y[j-1])
			{
				K[i][j] = K[i-1][j-1] +1;
			}
			
			else
			{
				K[i][j] = max(K[i-1][j], K[i][j-1]);
			}
		}
	}
	
	printf("%d", K[m][n]);
}

int main()
{
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";
	
	int m = strlen(X);
	int n = strlen(Y);
	
	longComSeq(X, Y, m, n);
	return 0;
}
