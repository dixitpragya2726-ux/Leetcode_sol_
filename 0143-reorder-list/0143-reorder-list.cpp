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
        if(head ->next == NULL){
            return;
        }
        
        ListNode*slow = head;
        ListNode*fast = head;
        ListNode*dis = NULL;
        while(fast!=NULL && fast->next !=NULL){
            dis = slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        dis->next = NULL;
        
        ListNode*prev = NULL;
        ListNode*curr = slow;
        while(curr!=NULL){
            ListNode*next_one = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next_one;
        }
        
        ListNode*i = head;
        ListNode*j = prev;
        while(i!=NULL && j!=NULL){
            ListNode*i_next = i->next;
            ListNode*j_next = j->next;
            i->next = j;
            if(i_next == NULL) break;   
                j->next = i_next;
            i= i_next;
            j = j_next;
        }
    }
};