class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<pair<int,int>> a;
        for(int i=0;i<nums.size();i++){
            a.push_back({nums[i],i});
        }
        sort(a.begin(),a.end());
        int s=0,e=nums.size()-1;
        while(s<e){
            if(a[s].first+a[e].first==target){
                return {a[s].second,a[e].second};
            }
            else if(a[s].first+a[e].first<target){
                s++;
            }
            else{
                e--;
            }
        }
        return {};
    }
};