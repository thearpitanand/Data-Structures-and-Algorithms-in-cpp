class Solution
{
public:
    // Space Complaxity = O(n) ,Time Complaxity = O(n)
    string removeDuplicates(string s)
    {
        stack<char> ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (ans.empty() || s[i] != ans.top())
                ans.push(s[i]);
            else
            {
                ans.pop();
            }
        }

        string ansStr = "";
        while (!ans.empty())
        {
            ansStr.push_back(ans.top());
            ans.pop();
        }
        reverse(ans.begin(), ans.end());
        return ansStr;
    }

    // Space Complaxity = O(1) ,Time Complaxity = O(n)
    string removeDuplicates(string s)
    {
        int ansPtr = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (ansPtr == -1 || s[i] != s[ansPtr])
            {
                ansPtr++;
                s[ansPtr] = s[i];
            }
            else
            {
                ansPtr--;
            }
        }
        string ans = "";
        for (int i = 0; i <= ansPtr; i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
};