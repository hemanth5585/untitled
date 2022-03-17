#include<bits/stdc++.h>
using namespace std;
/*
Building a heap from given array
*/
void max_heap(int a[], int n,int index)
{
    int lci = 2*index+1;
    int rci = lci+1;
    int mxi = index;
    if(lci<n && a[lci]>a[index])
        mxi = lci;
    if(rci<n && a[rci]>a[index])
        mxi = rci;
    if(mxi == index)
        return ;
    swap(a[mxi],a[index]);
    max_heap(a,n,mxi);
}
void build_heap(int a[], int n)
{
    for(int i=n/2;i>=0;i--)
        max_heap(a,n,i);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    build_heap(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
