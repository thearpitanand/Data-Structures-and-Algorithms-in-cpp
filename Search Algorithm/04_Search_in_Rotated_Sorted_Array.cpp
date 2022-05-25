class Solution
{
public:
    int search(vector<int> &nums, int key)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        while (start >= end)
        {
            mid = start + ((end - start) / 2);
            if (nums[mid] == key)
            {
                return mid;
            }
            if (nums[start] < nums[mid])
            {
                if (key > nums[start] && key < nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if (key > nums[mid] && key < nums[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};