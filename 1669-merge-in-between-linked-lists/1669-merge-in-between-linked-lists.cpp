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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*i = list1;
        ListNode*j = list1;
        for(int h =1;h<a;h++){
            if(i!=NULL){
                i = i->next;
            }
            
        }
        for(int k =0;k<b;k++){
            if(j!=NULL){
                j = j->next;
            }
            
        }
        ListNode*list2i = list2;
        while(list2i->next!=NULL){
            list2i=list2i->next;
        }
        i->next = list2;
        if(j->next!=NULL){
            list2i->next = j->next;
        }
        
        

    return list1;

    }
};