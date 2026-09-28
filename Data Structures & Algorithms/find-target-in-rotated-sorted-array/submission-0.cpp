class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
            int m = (r + l) / 2;
            if(target == nums[m]) {
                return m;
            }
            //left sorted portion
            if(nums[l] <= nums[m]) {
                if(target > nums[m] || target < nums[l])
                    l = m + 1;
                else
                    r = m - 1;
            } 
            //right sorted portion
            else {
                if(target < nums[m] || target > nums[r])
                    r = m - 1;
                else
                    l = m + 1;
            }
        }
        return -1;
    }
};
