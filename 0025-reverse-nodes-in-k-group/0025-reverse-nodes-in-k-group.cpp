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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return head;
        if(!head->next) return head;

        ListNode* check = head;
        for (int i = 0; i < k; i++) {
            if (!check) return head;   // not enough nodes → return as is
            check = check->next;
        }
        int pos=0;
        ListNode* prev= NULL;
        ListNode* curr= head;
        ListNode* temp = curr->next;

        while(pos<k){
            temp = curr->next;
            curr->next=prev;
            prev=curr;
            curr = temp;
            pos++;
        }
        ListNode* ans = NULL;
        if(temp != NULL){
            ans = reverseKGroup(temp, k);
            head->next = ans;
        }
        return prev;
    }
};