// @Runtime 19ms (15.83%)
// @Memory 7.4MB (56.19%)

bool isAnagram(string s, string t)
{
    auto sl = s.size();
    std::unordered_map<char, int> ums;
    std::unordered_map<char, int> umt;

    if (sl != t.size())
        return false;

    for (auto i = 0; i < sl; ++i)
    {
        if (!ums[s[i]])
            ums[s[i]] = 1;
        else
            ++ums[s[i]];

        if (!umt[t[i]])
            umt[t[i]] = 1;
        else
            ++umt[t[i]];
    }

    if (ums == umt)
        return true;
    return false;
}