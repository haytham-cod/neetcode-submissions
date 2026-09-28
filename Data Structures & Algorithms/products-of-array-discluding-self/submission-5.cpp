class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zero_count = 0;
        for(int num : nums) {
            if(num != 0)
                prod *= num;
            else
                zero_count++;
        }
        vector<int> res(nums.size(), 0);
        if(zero_count > 1){
            return res;
        }
        for(int i = 0; i < nums.size(); i++){
            if(zero_count){
                if(nums[i] == 0)
                    res[i] = prod;
            }
            else {
                res[i] = prod / nums[i];
            }
        }
        return res;
    }
};
