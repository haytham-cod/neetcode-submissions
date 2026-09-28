class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> x;
        
        vector<int> res = {};

        for (int i = 0; i < nums.size(); i++) {

            int needed = target - nums[i];

            if (x.count(needed)) {
                res.push_back( min(i, x[needed]) );
                res.push_back( max(i, x[needed]) );
                break;
            }

            x[nums[i]] = i;
        }
        return res;

    }
};