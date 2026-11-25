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
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0 ;

        if(head==NULL||head->next==NULL)
          return NULL ;

        
        ListNode* temp = head ; 

        while(temp){
            temp = temp->next ;
            count++ ;
        }

        int new_count = count/2 ;

        ListNode* tem = head ;
        ListNode* prev =NULL ;

        for(int i=0 ;i<new_count;i++){
            prev = tem ;
            tem = tem->next ;
        }

        prev->next = prev->next->next ;
        delete tem ;

        return head ;

    }
};