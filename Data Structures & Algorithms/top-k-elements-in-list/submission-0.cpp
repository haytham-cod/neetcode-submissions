class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> x;
        
        for(int& num : nums) {
            x[num]++;
        }
        vector<pair<int, int>> freq;
        for (auto& pair : x) {
            freq.push_back(pair);
        }
        sort(freq.begin(), freq.end(), [](auto& a, auto& b) {
            return a.second < b.second;
        });

        vector<int> result;

        for(int i = 0; i < k; i++) {
            result.push_back(freq.back().first);
            freq.pop_back();
        }

        return result;
    }
};
