//hemanth_5585 code
#include<bits/stdc++.h>
//#define hemanth_5585
/*
merge two sorted arrays
*/
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
void mergeArrays(int a[], int n, int b[], int m, int c[], int x)
{
	i=0;
	j=0;
	int k=0;
	while(i<n && j<m)
	{
		if(a[i]<=b[j])
		{
			c[k] = a[i];
			i++;
			k++;
		}
		else
		{
			c[k] = b[j];
			j++;
			k++;
		}
		
	}
	while(i<n)
	{
		c[k] = a[i];
		k++;
		i++;
	}
	while(j<m)
	{
		c[k] = b[j];
		k++;
		j++;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int c[n+m];
	sort(a,a+n);
	sort(b,b+m);
	mergeArrays(a,n,b,m,c,n+m);
	for(int i=0;i<n+m;i++)
	{
		cout<<c[i]<<" ";
	}
}


