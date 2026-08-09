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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> res;
        ListNode*i = l1;
        ListNode*j = l2;
        int carry = 0;
        int digit = 0;
        while(i!=NULL && j!=NULL){
            digit = i->val+j->val+carry;
            
            if(digit>=10){
                carry = 1;
                digit= digit%10;
            }
            else{
                carry =0;
            }
            res.push_back(digit);
            i= i->next;
            j= j->next;
        }
        while(i!=NULL){
            digit = i->val+carry;
            if(digit>=10){
                carry = 1;
                digit = digit%10;
            }
            else{
                carry = 0;
            }
            res.push_back(digit);
            i= i->next;
        }
        while(j!=NULL){
            digit = j->val+carry;
            if(digit>=10){
                carry = 1;
                digit = digit%10;
            }
            else{
                carry = 0;
            }
            res.push_back(digit);
            j = j->next;
        }
        if(carry){
            res.push_back(carry);
        }
        ListNode*head = new ListNode(res[0]);
        ListNode*temp = head;
        for(int i =1;i<res.size();i++){
            ListNode* newnode = new ListNode;
            newnode->val = res[i];
            temp->next = newnode;
            temp = newnode;
            
        }
        return head;

    }
};