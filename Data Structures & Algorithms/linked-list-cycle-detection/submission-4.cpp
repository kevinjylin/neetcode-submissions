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
        if(head==nullptr || head->next == nullptr){
            return false;
        }
        ListNode* second = head->next;
        while(head!=second){
            head = head->next;
            if(second->next == nullptr) return false;
            else{ 
                second = second->next;
                if(second->next == nullptr) return false;
                else{
                    second = second->next;
                }
            }
        }
        return true;
    }
};
