#include <bits/stdc++.h>
using namespace std;

#define MAX_M 10000

//Time complexity : min(n,log2(MAX_M))*m*m
//Memo complexity : min(n,log2(MAX_M))*m*m

long long int solve(int n,int m,vector <vector<long long int>> &dp)
{
	if(m<=0)return 0;
	if(n==1)return m;
	
	if(dp[n][m]!=-1)return dp[n][m];
	
	long long int ret=0;
	
	for(int i=1;i<=m;i++)
	{
		ret+=solve(n-1,i/2,dp);
	}
	return dp[n][m]=ret;
}


bool isZero(int n,int m)
{
	if((n-1)>(long int)ceil(log2(MAX_M)))return true;
	if(m<(1ll<<(n-1)))return true;
	
	return false;
}

int main()
{
	int n,m;
	cin>>n>>m;
	
	if(isZero(n,m))
	{
		cout<<"0"<<endl;
		exit(0);
	}
	
	vector <vector<long long int>> dp(n+1,vector <long long int> (m+1,-1));
	
	cout<<solve(n,m,dp);
}
