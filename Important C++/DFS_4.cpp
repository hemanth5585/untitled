//hemanth_5585 code
#include<bits/stdc++.h>
//#define hemanth_5585
typedef long long int ll;
ll i,j;
ll mod = pow(10,9)+7;
/*	
	DFS in 4 direction
*/
using namespace std;
void yes(){
	cout<<"YES"<<endl;
}
void no(){
	cout<<"NO"<<endl;
}
int a[1000][1000];
bool isValid(int i, int j, int n, int m)
{
	if(i>=0 && i<n && j>=0 && j<m && a[i][j]==0)
		return true;
	return false;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int si,sj;
	cin>>si>>sj;
	int c=1;
	stack<pair<int,int> > s;
	int di[] = {-1,0,1,0};
	int dj[] = {0,1,0,-1};
	a[si][sj]  = c++;
	s.push(make_pair(si,sj));
	while(!s.empty())
	{
		auto f = s.top();
		s.pop();
		int x = f.first;
		int y = f.second;
		for(i=0;i<4;i++)
		{
			int ni = x+di[i];
			int nj = y+dj[i];
			if(isValid(ni,nj,n,m))
			{
				a[ni][nj] = a[x][y]+1;
				s.push(make_pair(ni,nj));
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		    if(a[i][j]>0)
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}


