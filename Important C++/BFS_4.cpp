//hemanth_5585 code
#include<bits/stdc++.h>
//#define hemanth_5585
typedef long long int ll;
ll i,j;
ll mod = pow(10,9)+7;
/*
BFS in 2-D matrix, in 4 directions
*/
using namespace std;
void yes(){
	cout<<"YES"<<endl;
}
void no(){
	cout<<"NO"<<endl;
}
int a[100][100];
bool isValid(int x, int y, int n, int m)
{
    if(x>=0 && x<n && y>=0 && y<m && a[x][y]==0)
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
	int di[]={-1,0,1,0};
	int dj[]={0,1,0,-1};
	queue<pair<int,int> > q;
	int c = 1;
	q.push(make_pair(si,sj));;
	a[si][sj] = c++;
	while(!q.empty())
	{
		auto f = q.front();
		int x = f.first;
		int y = f.second;
		for(i=0;i<4;i++)
		{
			int indi = x+di[i];
			int indj = y+dj[i];
			if(isValid(indi, indj, n,m))
			{
				q.push(make_pair(indi, indj));
				a[indi][indj] = c++;
			}
		}
		q.pop();
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}


