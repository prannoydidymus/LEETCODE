/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *s,*f;
    s = head;
    f = head;
    while(f != NULL && f->next != NULL){
        s = s->next;
        f = f->next->next;
        if(f==s){
            return 1;
        }
    }
    return 0;
}