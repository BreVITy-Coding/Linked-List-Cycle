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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        // NULL == false 
        if( !head  or !head->next  or !head->next->next  )
            return false;
        
        do{
            slow = slow ->next;
            fast = fast ->next ->next;
        }
        
        while( slow != fast and fast->next and fast->next ->next );
        
        return slow == fast;
     
    }
};
