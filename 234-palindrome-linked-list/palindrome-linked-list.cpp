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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode * f = head,*s = head;
        while(f != nullptr && f->next != nullptr){
            f = f->next->next;
            s = s->next;
        }
        ListNode *temp = s;
        ListNode *prev = nullptr;
        while(temp){
        ListNode * newnode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = newnode;
        }
        ListNode *first = head;
        ListNode *second = prev;
        while(second){
            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;    }
};