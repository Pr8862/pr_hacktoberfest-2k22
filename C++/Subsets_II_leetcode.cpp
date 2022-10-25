class Solution {
public:
    void solve(vector<int> ip, vector<int> op, vector<vector<int>> &ans)
    {
        if(ip.size()==0)
        {
            sort(op.begin(),op.end());
            ans.push_back(op);
            op.clear();
            return;
        }
        vector<int> op1;
        vector<int> op2;
        op1=op;
        op2=op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin());
        solve(ip,op1,ans);
        solve(ip,op2,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ip;
        ip=nums;
        vector<int> op;
        vector<vector<int>> ans;
       solve(ip, op, ans);
         sort(ans.begin(), ans.end());
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
        return ans;
    }
};
