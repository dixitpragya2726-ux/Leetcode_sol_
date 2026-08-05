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
    int size_ll (ListNode* head){
        int cnt = 0;
        ListNode*temp = head;
        while(temp!=NULL){
            temp = temp->next;
            cnt ++;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x = size_ll(head);
        if(x==n){
            ListNode dummy(0);
            ListNode*del = head;
            dummy.next = head->next;
            delete del;
            return dummy.next;
        }
        ListNode*temp = head;
        for(int i =1;i<x-n;i++){
            temp = temp->next;
        }
        ListNode*del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};