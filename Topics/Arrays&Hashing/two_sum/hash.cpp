// @Runtime 8 ms (93.65%)
// @Memory 10.7 MB (45.55%)

vector<int> twoSum(vector<int> &nums, int target)
{
    std::unordered_map<int, int> m;
    std::vector<int> v = {0, 0};
    int i = 0;

    for (const auto n : nums)
    {
        if (m.count(target - n))
        {
            v[0] = m[target - n];
            v[1] = i;
            return v;
        }
        else
            m[n] = i;
        ++i;
    }

    return v;
}