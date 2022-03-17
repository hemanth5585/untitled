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
// kth element in stack without changing the stack
int fun(stack<int>& s, int k)
{
	stack<int> a;
	if(s.empty() || s.size()<k)
		return -1;
	for(i=1;i<k;i++)
	{
		a.push(s.top());
		s.pop();
	}
	int x = s.top();
	for(i=1;i<k;i++)
	{
		s.push(a.top());
		a.pop();
	}
	return x;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	stack<int> s;
	for(i=0;i<n;i++)
	{
		int x;
		cin>>x;
		s.push(x);
	}
	cout<<fun(s,3);
}


