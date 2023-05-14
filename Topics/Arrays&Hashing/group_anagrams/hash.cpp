// @Runtime 28 ms (95.11%)
// @Memory 19.5 MB (85.35%)

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs)
{
    std::unordered_map<std::string, std::vector<std::string>> m;
    std::vector<std::vector<std::string>> Q;

    for (const auto &s_ : strs)
    {
        std::string t = s_;
        std::sort(t.begin(), t.end());
        m[t].push_back(s_);
    }

    Q.reserve(m.size());
    for (const auto &m_ : m)
        Q.push_back(std::move(m_.second));

    return Q;
}