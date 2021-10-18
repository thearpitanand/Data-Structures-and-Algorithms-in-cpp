class Solution
{
public:
    int getFirst(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + ((end - start) / 2); // --> (Start + End) / 2
            if (nums[mid] == target)
            {
                ans = mid;
                end = mid - 1;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
    int getLast(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + ((end - start) / 2);
            if (nums[mid] == target)
            {
                ans = mid;
                start = mid + 1;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }

    int getIndex(vector<int> &nums, int target, bool getFirst)
    {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + ((end - start) / 2); // --> (Start + End) / 2
            if (nums[mid] == target)
            {
                ans = mid;
                if (getFirst == true)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> v(2, -1);
        int first = getIndex(nums, target, true);
        if (first == -1)
        {
            return v;
        }
        int last = getLast(nums, target, false);
        v[0] = first;
        v[1] = last;
        return v;
    }
};