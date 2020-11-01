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
    ListNode* removeElements(ListNode* head, int value) {
     if(!head) return head;
            
            while(head->val == value ){
                    head = head->next;
               if(!head) return head;
            }  
            ListNode* point = head;
            while(point->next!=NULL){
                    
                    if(point->next->val == value){
                            point->next = point->next->next;
                    }
                    else if(point->next->val != value){
                            point = point->next;
                    }
                    
            }
            return head;
    }
};