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
    void deleteNode(ListNode* node) {
        //We will copy every next node to the one that 'node' points to and 
        //at the end we will delete the last node of the list
        ListNode *next = node->next;
        while(next->next!=NULL)
        {
            node->val = next->val;
            cout << node->val <<endl;
            node = next;
            next = node->next;
        }
        node->val = next->val;
        node->next = NULL;
        delete next;
    }
};
