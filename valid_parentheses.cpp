// Problem: https://leetcode.com/problems/valid-parentheses
// Solution by: Akash Roy


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='[' or ch=='{' or ch=='(')
                st.push(ch);
            else if(!st.empty() and ch==']')
            {
                if(st.top()!='[' and ch==']')
                    return false;
                st.pop();
            }
            else if(!st.empty() and ch=='}')
            {
                if(st.top()!='{' and ch=='}')
                    return false;
                st.pop();
            }
            else if(!st.empty() and ch==')')
            {
                if(st.top()!='(' and ch==')')
                    return false;
                st.pop();
            }
            else
            return false;
        }
        if(!st.empty())
        return false;
        return true;
    }
};