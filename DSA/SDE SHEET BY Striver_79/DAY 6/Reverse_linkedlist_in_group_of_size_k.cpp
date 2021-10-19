//Reverse a LinkedList in groups of size k. 
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
    ListNode* reverse(ListNode* first, ListNode* last)
    {
        ListNode* prev = last;
        
        while ( first != last )
        {
            auto tmp = first->next;
            first->next = prev;
            prev = first;
            first = tmp;
        }
        
        return first;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode* node = head;
        for (int i=0; i < k; i++)
        {
            if ( ! node  )
                return head; 
            node = node->next;
        }

        ListNode* new_head = reverse( head, node);
        head->next = reverseKGroup( node, k);
        return new_head;
    }
};