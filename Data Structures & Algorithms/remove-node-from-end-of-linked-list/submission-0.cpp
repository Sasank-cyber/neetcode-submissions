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
        ListNode *temp = head;
        int N = 0;
        while(temp){

            N++;      
            temp = temp->next;
        }
        
        if (N == n) {
            return head->next;
        }
        temp = head;
        int l = 0;
        while(l < N-n-1){
            
            temp = temp->next;
            l++;
        }
        temp->next = temp->next->next;

        return head;

        
    }
};
