class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> x;
        
        for(int& num : nums) {
            x[num]++;
        }
        vector<vector<int>> freq(nums.size() + 1);
        for(auto& p : x) {
            freq[p.second].push_back(p.first);
        }

        vector<int> res;
        for(int i = nums.size() ; i > 0; i--) {
            for(int n : freq[i]) {
                res.push_back(n);
                if(res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
