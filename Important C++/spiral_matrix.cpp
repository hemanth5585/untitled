//hemanth_5585 code
#include<bits/stdc++.h>
//#define hemanth_5585
typedef long long int ll;
ll i,j;
ll mod = pow(10,9)+7;
using namespace std;
int arr[100][100];
void yes(){
	cout<<"YES"<<endl;
}
void no(){
	cout<<"NO"<<endl;
}
void print_outer(int n, int m)
{
	int sr = 0,sc=0,er=n-1,ec=m-1;
	int total = n*m;
	while(total!=0)
	{
		for(i=sr;i<=ec;i++)
		{
			cout<<arr[sr][i]<<" ";
			if(total<=0)
			break;
			total--;
		}
		sr++;
		for(i=sr;i<=er;i++)
		{
			cout<<arr[i][ec]<<" ";
			if(total<=0)
			break;
			total--;
		}
		ec--;
		for(i=ec;i>=sc;i--)
		{
			cout<<arr[er][i]<<" ";
			
			if(total<=0)
				break;
			total--;
		}
		er--;
		for(i=er;i>=sr;i--)
		{
			cout<<arr[i][sc]<<" "; 
			if(total<=0)
			break;
			total--;
		}
		sc++;
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
			cin>>arr[i][j];
		}
	}
	cout<<"\n";
	print_outer(n,m);
}
