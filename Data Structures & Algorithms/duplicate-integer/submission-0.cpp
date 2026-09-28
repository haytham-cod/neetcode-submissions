class Solution {
public:
    int hash(int num, int size) {
        if(num < 0)
            return (num % size) * -1;

        return num % size;
    }

    bool hasDuplicate(vector<int>& nums) {
        vector<vector<int>> unique(nums.size());

        for(int i = 0; i < nums.size(); i++) {

            int index = hash(nums[i], nums.size());

            for(int j = 0; j < unique[index].size(); j++) {
                if(unique[index][j] == nums[i]) {
                    return true;
                }
            }  
            unique[index].push_back(nums[i]); 
        }
        return false;
    }
};