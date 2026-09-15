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
    if (!headA || !headB) return nullptr;

    ListNode *tempA = headA;
    ListNode *tempB = headB;

    while (tempA != tempB) {
        // Move forward, or switch to the other list when reaching end
        tempA = (tempA == nullptr) ? headB : tempA->next;
        tempB = (tempB == nullptr) ? headA : tempB->next;
    }

    return tempA; // Either intersection node or nullptr
}
};