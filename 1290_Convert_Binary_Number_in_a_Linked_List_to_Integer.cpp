/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
    int getDecimalValue(ListNode* head) {
        int num=0;
        while(head)
        {
            num <<= 1;
            num = num | head->val;
            head = head->next;
        }
        return num;
    }
};
