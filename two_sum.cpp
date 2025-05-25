// Problem: https://leetcode.com/problems/two-sum
// Solution by: Akash Roy


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int c;
        for(int i=0;i<nums.size();i++)
        {
            c=target-nums[i];
            if(map.find(c)!=map.end())
            {
                return {map[c],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};