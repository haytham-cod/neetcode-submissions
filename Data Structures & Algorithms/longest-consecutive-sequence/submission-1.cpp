class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq;

        sort(nums.begin(), nums.end());
        int maximus = 0, max = 0;
        // [2,20,4,10,3,4,5]
        // [2, 3, 4, 4, 5, 10, 20]
        for(int i = 0; i < nums.size(); i++) {
            if(seq.count(nums[i])) continue;
            if(seq.count(nums[i] - 1)) {
                seq.insert(nums[i]);
                max++;
                if(max > maximus)
                    maximus = max;
            } else {
                seq.insert(nums[i]);
                max = 1;
            }
            if(max > maximus)
                maximus = max;
        }
        return maximus;
    }
};
