class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> ans;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*")
            {
                int val1 = ans.top();
                ans.pop();
                int val2 = ans.top();
                ans.pop();
                if (tokens[i] == "+")
                {
                    ans.push(val1 + val2);
                }
                else if (tokens[i] == "-")
                {
                    ans.push(val1 - val2);
                }
                else if (tokens[i] == "*")
                {
                    ans.push(val1 * val2);
                }
                else if (tokens[i] == "/")
                {
                    ans.push(val1 / val2);
                }
            }
            else
            {
                ans.push(atoi(tokens[i].c_str()));
            }
        }
        return ans.top();
    }
};