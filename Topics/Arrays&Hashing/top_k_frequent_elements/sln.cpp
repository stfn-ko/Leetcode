vector<int> topKFrequent(vector<int> &nums, int k)
{
    priority_queue<pair<int, int>> pq;
    unordered_map<int, int> um;
    vector<int> v;
    v.reserve(k);

    for (const auto &num : nums)
        um[num]++;
    for (const auto &m : um)
    {
        pq.push(make_pair(m.second, m.first));
        if (pq.size() > um.size() - k)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
    }
    return v;
}