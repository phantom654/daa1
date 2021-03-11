#include <bits/stdc++.h>
using namespace std;

long long int solve(int n,int m)
{
	if(m<=0)return 0;
	if(n==1)return m;
	
	long long int ret=0;
	
	for(int i=1;i<=m;i++)
	{
		ret+=solve(n-1,i/2);
	}
	return ret;
}

int main()
{
	int n,m;
	cin>>n>>m;
	
	cout<<solve(n,m)<<endl;
}