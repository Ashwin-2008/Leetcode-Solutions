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
        int total_nodes = 0;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            total_nodes++;
            temp = temp->next;
        }
        
        int middle_index = total_nodes / 2;
        
        ListNode* current = head;
        for (int i = 0; i < middle_index; i++) {
            current = current->next;
        }
        
        return current;
    }
};