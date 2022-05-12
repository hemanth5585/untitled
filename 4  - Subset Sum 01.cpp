/*
	Aditya verma vid 7
	Subset Sum problem
QUESTION:
Given an array and Target_Sum, select a subset such that sum of elements in that subset is Target_Sum

Sample Input : arr[] = 2 3 7 8 10
Sample Output: Target_Sum = 11
*/
bool dp[n+1][x+1];
for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0)
			{
				dp[i][j] = false;	
			}
			if(j==0)
			{
				dp[i][j] = true;
			}
		}
	}
bool subsetSum(int a[], int x, int n)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=x;j++)
		{
			if(a[i-1]<=x)
			{
				dp[i][j] = dp[i-1][j-a[i-1]] ||dp[i-1][j];	
			}	
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[n][m];
}
