#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int mod=1e9+7;
    int recurse(int n,int k,int t, int sum,vector<vector<int>> &dp)
    {
        if(n==0)
        {
            if(sum==t)
            {
                return 1;
            }
            return 0;
        }
        if(dp[sum][n]!=-1)
        {
            return dp[sum][n];
        }
        long long int maxi=0;
        for(int i=1;i<=k;i++)
        {
            maxi=maxi+recurse(n-1,k,t,sum+i,dp);
        }
        return dp[sum][n]=maxi%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(1001,vector<int>(n+1,-1));
        return recurse(n,k,target,0,dp);
    }
int main()
{
	cout<<numRollsToTarget(20,15,25);
}
