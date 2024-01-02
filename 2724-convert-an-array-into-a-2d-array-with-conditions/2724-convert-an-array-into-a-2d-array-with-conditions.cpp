class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxVal=INT_MIN;
        for(auto [key, value]: mp)
        {
            maxVal=max(value, maxVal);
        }
        vector<vector<int>> ans(maxVal);
        for(auto [key, val]:mp)
        {
            for(int i=0;i<val;i++)
            {
                ans[i].push_back(key);
            }
        }
        return ans;

    }
};