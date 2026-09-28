class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> x;
        for(int num : nums) {
            if(x.find(num) != x.end())
                return true;
            x.insert(num);
        }
        return false;
    }
};