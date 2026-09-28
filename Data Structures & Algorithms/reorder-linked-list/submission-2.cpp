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
        vector<ListNode*> nodes;
        while(temp) {
            nodes.push_back(temp);
            temp = temp->next;
        }
        int l = 0;
        int r = nodes.size() - 1;

        while(l < r) {
            nodes[l]->next = nodes[r];
            nodes[r]->next = nodes[l + 1];
            r--;
            l++;
        }

        nodes[l]->next = nullptr;
    }
};
