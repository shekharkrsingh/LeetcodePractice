class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int count=0;
        for(auto [key, val]: mp)
        {
            if(val<2)
            return -1;
            if(val%3==0)
            count+=val/3;
            else
            count+=1+(val/3);
        }
        return count;
    }
};