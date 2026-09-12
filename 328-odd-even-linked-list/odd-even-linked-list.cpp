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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head ->next == NULL ){
            return head;
        }
       ListNode *f,*s,*temp;
       s = head;
       f = head->next; 
       temp = f;
       while(f != nullptr && f->next != nullptr){
        s ->next = f->next;
        s = s->next;
        f->next = s->next;
        f = f->next;
       }
       s->next = temp;
       return head;
  }
};