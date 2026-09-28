class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> x;
        for(int n : nums) {
            if(x.count(n))
                return true;
            x.insert(n);
        }
        return false;
    }
};