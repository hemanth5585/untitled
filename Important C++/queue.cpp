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
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	queue<int> a;
	while(n--)
	{
		int x;
		cin>>x;
		a.push(x);
	}
	a.pop();
	while(!a.empty())
	{
		cout<<a.front()<<" ";
		a.pop();
	}
}


