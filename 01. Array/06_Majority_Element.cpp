class Solution
{
public:
    // Using Moore's Voting Algorithm
    int majorityElement(vector<int> &nums)
    {
        int i = 0;
        int ans = nums[0];
        int count = 1;
        while (i < nums.size())
        {
            if (nums[i] == ans)
            {
                count++;
            }
            else
            {
                count--;
                if (count == 0)
                {
                    ans = nums[i];
                    count = 1;
                }
            }
            i++;
        }
        return ans;
    }

    // Using Moore's Voting Algorithm
    int majorityElement(vector<int> &nums)
    {
        int ans = nums[0];
        int count = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == ans)
            {
                count++;
            }
            else
            {
                count--;
                if (count == 0)
                {
                    ans = nums[i];
                    count = 1;
                }
            }
        }
        return ans;
    }
};