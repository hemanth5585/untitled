//Aditya verma vid 4
//01 knapsack using memoization
int dp[1001][1001];
memset(dp,-1,sizeof(dp));

int kanpsack(int wt[], int val[], int w, int n)
{
	if(n==0 || w==0)
		return 0;
	if(dp[n][w]!=-1)
		return dp[n][w];
	else if(wt[n-1]<=w)
	{
		return dp[n][w] = max(val[n-1]+knapsack(wt,val,w-val[n-1],n-1),knapsack(wt,val,w,n-1));
	}
	else
	{
		return dp[n][w] = knapsack(wt,val,w,n-1);
	}
}

