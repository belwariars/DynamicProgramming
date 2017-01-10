// no. of ways to cover a distance...

#include <bits/stdc++.h>
using namespace std;

void noOfWays(int dist)
{
	int table[dist+1];  
	
	table[0] =1; // The way to cover 0 distance is 1
	table[1] = 1;  // The way to cover 1 distance is 1
	table[2] = 2;  // The way to cover 2 distance is 2
	int i;
	
	for(i=3; i<=dist; i++)
	{
		table[i] = table[i-3] + table[i-2] + table[i-1];
	}
	
	printf("Ways: %d", table[dist]);
}

int main()
{
	int dist;
	printf("Enter total distance\n");
	scanf("%d", &dist);
	
	noOfWays(dist);
	return 0;
}
