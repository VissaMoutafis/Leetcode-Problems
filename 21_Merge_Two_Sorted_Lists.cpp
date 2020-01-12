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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        else if(l2 == NULL) return l1;
        else{
            if(l1->val > l2->val) l2->next = mergeTwoLists(l1,l2->next);
            else
            {
                l1->next = mergeTwoLists(l1->next, l2);
            }
        }
        if(l1->val > l2->val) return l2;
        
        return l1;
    }
};

/**
 *We recurse through the two lists and merge them according to the value of the two current nodes.
 *This method is very much like the second part of the Merge Sort Algorithm for 2 lists.
 */
