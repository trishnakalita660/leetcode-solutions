class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(-1);
        ListNode* count=temp;
        while(l1 && l2){
            if(l1->val<l2->val){
                count->next=l1;
                l1=l1->next;
            }
            else{
                count->next=l2;
                l2=l2->next;
            }
            count=count->next;
        }
        count->next=(l1!=NULL)?l1:l2;
        return temp->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* temp=new ListNode(-1);
        ListNode* count=temp;
        for(int i=0; i<lists.size(); i++){
            count->next=mergeTwoLists(temp->next, lists[i]);
        }
        return temp->next;
    }
};