// @Runtime: 157ms (37.76%)
// @Memory: 69.5MB (49.82%)
// @Time: O(n)
// @Space O(n)

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        std::unordered_map<int, int> um;

        for (const auto num : nums)
        {
            if (!um[num])
                um[num] = 1;
            else
                ++um[num];

            if (um[num] > 1)
                return true;
        }

        return false;
    }
};