// Convert Binary Number in a Linked List to Integer

// Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

// Return the decimal value of the number in the linked list.

// Input: head = [1,0,1]
// Output: 5
// Explanation: (101) in base 2 = (5) in base 10

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
    int getDecimalValue(ListNode* head) {
     ListNode * p = head;
            int counter=0;// count length of the linked list
            while(p->next !=NULL){
                    counter++;
                   p= p->next;
            }
    int length = counter+1;
            int binary=0;
            
            for(int i=0;i< length;i++){
                    binary+= (head->val)*(pow(2,length-i-1)); // converting into decimal
                    head=head->next;
            }
            return binary;
    }
};