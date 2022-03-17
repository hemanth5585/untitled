//hemanth_5585 code
#include<bits/stdc++.h>
//#define hemanth_5585
typedef long long int ll;
ll i,j;
ll mod = pow(10,9)+7;
using namespace std;
void yes(){
	cout<<"YES"<<endl;
}
void no(){
	cout<<"NO"<<endl;
}
int a[100][100];
int cal(int si, int sj)
{
	int sum = 0;
	int i = si;
	while(si>=0 && sj<=i)
	{
		sum =sum+a[si][sj];
		si--;
		sj++;
	}
	return sum;
}
int cal1(int si, int sj)
{
	int sum =0;
	int index = si;
	while(si>=0 && sj<=index+1)
	{
		sum=sum+a[si][sj];
		si--;
		sj++;
	}
	return sum;
}
void iterate(int n, int m)
{
	// for coloumn o to n-1
	for(i=0;i<n;i++)
	{
		cout<<cal(i,0)<<"\n";
	}
	//n-1 to m-1
	for(i=1;i<m;i++)
	{
		cout<<cal1(n-1,i)<<"\n";		
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	iterate(n,m);
}


