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
    bool hasCycle(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head->next;
        if (head == nullptr){
            return false;
        }
        while(first != second){
             if(first == nullptr || second == nullptr){
                return false;
            }
            first = first->next;
            if(second->next == nullptr){
                return false;
            }
            else{
            second = second->next->next;
            }
        }
        return true;
    }
};
