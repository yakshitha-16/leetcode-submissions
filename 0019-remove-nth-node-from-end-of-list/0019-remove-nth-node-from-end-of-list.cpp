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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head ;
        int count = 0 ;

        while(temp){
            temp = temp->next ;
            count++ ;
        }

        int x = count - n ;

        if(x==0){
            ListNode* del = head ;
            head = head->next ;
            delete del ;
            return head ;
        }

        ListNode* temp1 = head ;
        for(int i=0 ; i<x-1 ;i++){
            temp1 = temp1->next ;
        }

        ListNode* node = temp1->next ;

        temp1->next = node->next ;

        delete node ;

        return head ;

    }
};