// Problem: https://leetcode.com/problems/3sum
// Solution by: Akash Roy


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
                if(i>0 and nums[i]==nums[i-1])
                continue;
                int l=i+1;
                int r=n-1;
                while(l<r)
                {
                    int sum=nums[i]+nums[l]+nums[r];
                    if(sum==0)
                    {
                        result.push_back({nums[i],nums[l],nums[r]});

                        while(l<r and nums[l]==nums[l+1])
                        l++;
                        while(l<r and nums[r]==nums[r-1])
                        r--;

                        l++;
                        r--;

                    }
                    else if(sum<0)l++;
                    else r--;
                    
                }
        }
        return result;
    }
};