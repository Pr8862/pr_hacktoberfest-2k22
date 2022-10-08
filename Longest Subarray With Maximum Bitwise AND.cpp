#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int longestSubarray(vector<int>& nums) {
        int maxi=-1;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
        int maximum=0;
        bool check=false;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxi)
            {
                count++;
                check=true;
            }
            else
            {
                if(check==true)
                {
                    maximum=max(maximum,count);
                    check=false;
                    count=0;
                }
            }
        }
        maximum=max(maximum,count);
        return maximum;
    }
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(10);
	v.push_back(5);
	cout<<longestSubarray(v);
}
