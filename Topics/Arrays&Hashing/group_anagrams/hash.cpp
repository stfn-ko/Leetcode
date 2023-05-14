std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs)
{
    std::unordered_map<std::string, std::vector<std::string>> map;
    for (const auto &str : strs)
    {
        std::string temp = str;
        std::sort(temp.begin(), temp.end());
        map[t].push_back(str);
    }

    std::vector<std::vector<std::string>> ans;
    for (const auto &m : map)
    {
        ans.push_back(m.second);
    }

    return ans;
}