/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* tempA = headA ;
    ListNode* tempB = headB ;

    long long int cntA = 0 ;
    long long int cntB = 0 ;

    while(tempA){
        cntA++ ;
        tempA = tempA->next ;
    }

    while(tempB){
        cntB++ ;
        tempB = tempB->next ;
    }

    int skipA = max(0LL,cntA-cntB);
    int skipB = max(0LL,cntB-cntA);

    ListNode* a = headA ;
    ListNode* b = headB ;

    for(int i=0 ; i<skipA ; i++){
         a = a->next ;
    }

    for(int j = 0 ; j<skipB ; j++){
        b= b->next ;
    }

    while(a != NULL && b != NULL){
    if(a == b)
        return a;

    a = a->next;
    b = b->next;
    }

    return NULL ;


    }
};