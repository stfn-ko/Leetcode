// @Runtime 9ms (69.97%)
// @Memory 7.3MB (56.19%)

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return 0;

    std::unordered_map<char, int> ums;
    for (const auto &_ : s)
        ++ums[_];

    std::unordered_map<char, int> umt;
    for (const auto &_ : t)
        ++umt[_];

    if (umt == ums)
        return true;
    return false;
}