#include <set>
#include <queue>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int dp[4005],n,a,i,j;
    fill(dp+1,dp+4005,-1e9);
    cin>>n;
	for(;cin>>a;)
        for(i=a;i<=n;i++)
            dp[i]=max(dp[i],dp[i-a]+1);
	cout<<dp[n];
    return 0;
}
