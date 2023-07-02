// @Runtime: 281 ms (41.32%)
// @Memory: 69.4 MB (8.80%)

class Solution {
    std::unordered_map<int, int> um;
    int ans = 0;

    void check_num(int _n) {
        if (this->um[_n]) return;
        
        this->um[_n] = 
        this->um[_n + this->um[_n+1]] = 
        this->um[_n - this->um[_n-1]] = 
        this->um[_n+1] + this->um[_n-1] + 1;

        if (this->ans > this->um[_n]) return;
        else this->ans = this->um[_n];
    }

public:
    int longestConsecutive(vector<int>& nums) {
        for(const auto &n: nums) check_num(n);
        return ans;
    }
};