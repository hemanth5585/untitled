/*
Aditya verma vid 5
0 1 knapsack using tabulation or bottom-up approach
	SUMMARY:
-> Look at the recursive or memoization code and change as required
*/

int dp[1001][1001];
memset(dp,-1,sizeof(dp));

int kanpsack(int wt[], int val[], int w, int n)
{
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0 || j==0)
				dp[i][j] = 0;
		}
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(wt[i-1]<=j)
			{
				dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i]-1],dp[i-1][j]);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[n][w];
}
