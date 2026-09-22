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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=nullptr,*temp=nullptr,*n;
        if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }
        do{
        if(list1->val>=list2->val){
            n=new ListNode();
            n->val=list2->val;
            list2=list2->next;
            n->next=nullptr;
            if(!head){
                head=n;
                temp=head;
            }
            else{
                temp->next=n;
                temp=n;

            }
        }
        else{
            n=new ListNode();
            n->val=list1->val;
            list1=list1->next;
            n->next=nullptr;
            if(!head){
                head=n;
                temp=head;
            }
            else{
                temp->next=n;
                temp=n;

            }

        }
    }while(list1!=nullptr && list2!=nullptr);
    if(list1 != nullptr)
    temp->next = list1;

    if(list2 != nullptr)
    temp->next = list2;
    return head;
        
    }

};