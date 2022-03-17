#include<bits/stdc++.h>
using namespace std;
void mergeArrays(int a[], int b[], int n, int c[], int m)
{
	int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(b[i]<=c[j]){
			a[k] = b[i];
			i++;
			k++;
		}
		else
		{
			a[k]  = c[j];
			j++;
			k++;
		}
	}
	while(i<n)
	{
		a[k] = b[i];
		k++;
		i++;
	}
	while(j<m)
	{
		a[k] = c[j];
		k++;
		j++;
	}
}

void mergeSort(int a[], int n)
{
	if(n==0 || n==1)
		return ;
	int s1 = n/2;
	int s2 = n-s1;
	int b[s1],c[s2];
	int k=0;
	for(int i=0;i<s1;i++)
	{
		b[k] = a[i];
		k++;
	}	
	for(int i=0;i<s2;i++)
	{
		c[i] = a[k];
		k++;
	}
	mergeSort(b,s1);
	mergeSort(c,s2);
	mergeArrays(a,b,s1,c,s2);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	mergeSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
