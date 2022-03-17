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
	int t;
	cin>>t;
	stack<int> s;
	while(t--)
	{
		
		int n;
		cin>>n;
		if(n==1)
		{
			int x;
			cin>>x;
			s.push(x);
		}
		else if(n==2)
		{
			if(!s.empty())
			{
				s.pop();
				
			}
			else
			{
				cout<<"Empty!\n";
				break;
			}
		}
		else if(n==3)
		{
			if(s.empty())
			{
				cout<<"Empty!\n";
				break;
			}
			else
			{
				cout<<s.top()<<"\n";
				s.pop();
			}
		}
	}
}


