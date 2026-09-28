class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq;
        for(int num : nums)
            seq.insert(num);
        // [2,20,4,10,3,4,5]
        int longest = 0;
        for(int num : nums) {
            
            if(!seq.count(num - 1)) {
                int current = num;
                int length = 1;
                
                while(seq.count(current + 1)) {
                    current++;
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};
