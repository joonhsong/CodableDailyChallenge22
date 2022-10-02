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
        int count = 0;
        ListNode* c = head;
        
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        
        while(c){
            c = c->next;
            count++;
        }
        
        c = head;
        ListNode* t = NULL;
        int size = 1;
        
        if(size == (count - n + 1) ){
        head = c->next;
        delete(c);
        return head;
        }
	
        while(c != NULL && size != (count - n + 1)  ){
        t = c;
        c = c->next;
        size++;
        }
        t->next = c->next;
        delete(c);
        
        return head;
    
    }
};