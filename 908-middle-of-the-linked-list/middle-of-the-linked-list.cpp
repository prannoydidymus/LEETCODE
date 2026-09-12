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
    ListNode* middleNode(ListNode* head) {
       ListNode *f;
       int count = 0;
        f = head;
        bool cycle = false;
        while(f != NULL){
            f = f->next;
            count++;
            }
            for(int i = 0;i<count/2;i++){
                head = head->next;
            }
            return head;
    }
};