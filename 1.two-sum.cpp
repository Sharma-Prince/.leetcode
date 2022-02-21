/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int x;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            x = target-nums[i];
            if(mp.find(x)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[x]);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};
// @lc code=end

