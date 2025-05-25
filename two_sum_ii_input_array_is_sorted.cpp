// Problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted
// Solution by: Akash Roy


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> map;
        int c;
        for(int i=0;i<numbers.size();i++)
        {
            c=target-numbers[i];
            if(map.find(c)==map.end())
            map[numbers[i]]=i+1;
            else
            {
                return {map[c],i+1};
            }
        }
        return {};
    }
};