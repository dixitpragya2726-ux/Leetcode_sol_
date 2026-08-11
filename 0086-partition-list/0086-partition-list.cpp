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
        ListNode* partition(ListNode* head, int x) {
            if(!head || head->next==NULL){
                return head;
            }
            ListNode dummysmall(0);
            ListNode dummybig(0);
            ListNode*sml = &dummysmall;
            ListNode*big = &dummybig;
            ListNode*temp = head;
            while(temp!=NULL){
                if(temp->val>=x){
                    big->next = temp;
                    big = temp;
                }
                else{
                sml->next = temp;
                sml = temp;
                }
                temp = temp->next;
            }
            big->next = NULL;
            sml->next = dummybig.next;
            return dummysmall.next;
          
           
        }
    };