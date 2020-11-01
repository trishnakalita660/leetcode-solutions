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
    ListNode* middleNode(ListNode* head) {
         ListNode* lastPoint = head;
       ListNode* midPoint= lastPoint;
            if(head==NULL) return head;
        
            while( lastPoint!=NULL &&lastPoint->next!=NULL){
                    lastPoint= lastPoint->next->next;
                    midPoint= midPoint->next;
            }
            return midPoint;
    }
};