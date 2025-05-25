// Problem: https://leetcode.com/problems/roman-to-integer
// Solution by: Akash Roy


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m={{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int val=m[s[i]];
            int val2=m[s[i+1]];
            if(val2>val)
            {
                sum+=val2-val;
                i++;
            }
            else
            sum+=m[s[i]];
        }
        return sum;
    }
};