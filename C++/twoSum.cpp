class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        
        int i=0,j=v.size()-1;
        int ind1=0,ind2=0;
        
        while(i<j){
            
            if(v[i].first+v[j].first==target){
                ind1=v[i].second;
                ind2=v[j].second;
                break;
            }
            
            if(v[i].first+v[j].first <target)
                i++;
            
                        
            if(v[i].first+v[j].first > target)
                j--;
            
            
            
        }
        
        return {ind1,ind2};
        
    }
};
