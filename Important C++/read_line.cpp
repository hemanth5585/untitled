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
inline istream& skip_endl(istream &is) 
{ 
	return is.ignore(numeric_limits<streamsize>::max(),'\n'); 
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cout<<"Enter testcases\n";
	cin>>t>>skip_endl;
	cout<<"Testcase completed\n";
	while(t--)
	{
		string s;
		cout<<"Enter string with spaces\n";
		getline(cin,s);
		cout<<s<<"\n";
	}
}


