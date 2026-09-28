class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> indices;

       for(int i = 0; i < nums.size(); i++) {
            int dif = target - nums[i];
            if(indices.find(dif) != indices.end()) 
                return {indices[dif], i};
            else
                indices[nums[i]] = i;
       }

       return {};
    }
};