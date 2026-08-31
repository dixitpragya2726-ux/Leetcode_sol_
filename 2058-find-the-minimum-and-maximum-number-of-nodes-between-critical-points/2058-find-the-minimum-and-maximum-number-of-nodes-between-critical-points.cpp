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
    bool help(const vector<int>&res,int i){
        if(res[i-1]>res[i] && res[i+1]>res[i]){
            return true;
        }
        else if(res[i-1]<res[i] && res[i+1]<res[i]){
            return true;
        }
        return false;
    }

    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>res;
        vector<int>ans;
        int x = 0;
        int minx = INT_MAX;
        int maxy = 0;
        int first = -1;
        int prev = -1;
        ListNode*temp = head;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp=temp->next;
        }
        for(int i =1;i<res.size()-1;i++){
            if(help(res,i)){
                if(first == -1){
                    first = i;
                }
                else{
                    minx = min(minx,i-prev);
                    maxy = i-first;
                }
                prev = i;
            }
        }
        if(minx == INT_MAX && maxy ==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            ans.push_back(minx);
        ans.push_back(maxy);
        }
        
        return ans;
    }
};