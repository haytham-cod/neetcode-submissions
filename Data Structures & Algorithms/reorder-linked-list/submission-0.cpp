/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<int> values;
        while(temp) {
            values.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> nums;
        int r = values.size() - 1;
        for(int i = 0; i < values.size() / 2; i++) {
            nums.push_back(values[i]);
            nums.push_back(values[r]);
            r--;
        }
        if(values.size() % 2 != 0) {
            nums.push_back(values[r]);
        }

        int j = 0;
        ListNode* temp2 = head;
        while(temp2) {
            temp2->val = nums[j];
            j++;
            temp2 = temp2->next;
        }

    }
};
