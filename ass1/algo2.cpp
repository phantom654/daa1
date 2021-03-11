#include <bits/stdc++.h>
using namespace std;

bool isZero(int n,int m)
{
	if(n>=60)return true;
	if((long long int)m<(1ll<<(long long int)(n-1)))return true;
	
	return false;
}

long long int solve(int n,int m,vector <vector <long long int>> &mem)
{
    if(isZero(n,m))return 0;
    if(n==1)return m;

    if(mem[n][m]!=-1)return mem[n][m];

    return mem[n][m]=solve(n,m-1,mem)+solve(n-1,m/2,mem);
}

int main()
{
    int n,m;
    cin>>n>>m;

    if(isZero(n,m))
    {
        cout<<0<<endl;
        exit(0);
    }

    vector <vector<long long int>> mem(n+1,vector <long long int> (m+1,-1));

    cout<<solve(n,m,mem)<<endl;

}