// Sort a linked list using insertion sort.

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
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* cur = head->next;
        ListNode* sorted = head;
        sorted->next = NULL;
        
        while(cur){
            ListNode* nextnode = cur->next;
            ListNode* prev = NULL;
            ListNode* current = sorted;
            
            while(current && current->val <= cur->val){
                prev = current;
                current = current->next;
            }
            
            if(!prev){
                cur->next = sorted;
                sorted = cur;
            }
            
            else{
                prev->next = cur;
                cur->next = current;
            }
            
            cur = nextnode;
            
        }
        return sorted;
    }
};