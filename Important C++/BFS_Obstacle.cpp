//hemanth_5585 code
#include<bits/stdc++.h>
//#define hemanth_5585
typedef long long int ll;
ll i,j;
ll mod = pow(10,9)+7;
/*
	Given a 2-D matrix, which has marked -1 in all cells initally,
	and few cells are marked 99 which indicates that cell has obstacles. 
	Given start point, find shortest path to reach N,N; 
*/
using namespace std;
void yes(){
	cout<<"YES"<<endl;
}
void no(){
	cout<<"NO"<<endl;
}
int a[100][100];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	cout<<"Enter Start index: ";
	int si,sj;
	cin>>si>>sj;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	queue<pair<int, int> > q;
	int c=1;
	int di[]  = {-1,-1,0,1,1,1,0,-1};
	int dj[]  = {0,1,1,1,0,-1,-1,-1};
	q.push(make_pair(si,sj));
	a[si][sj] = 0;
	while(!q.empty())
	{
		auto f = q.front();
		int x = f.first;
		int y = f.second;
		for(i=0;i<8;i++)
		{
			int ni = x+di[i];
			int nj = y+dj[i];
			if( ni>=0 && ni<n && nj>=0 && nj<m && a[ni][nj]!=99 && a[ni][nj]==-1)
			{
				q.push(make_pair(ni,nj));
				a[ni][nj]=1+a[x][y];
			}
		}
		q.pop();
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
