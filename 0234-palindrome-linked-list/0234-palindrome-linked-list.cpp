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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // Approach 1; 
            // create a new LL
            // reverse it ans store in new LL
            // compare with original  O(n) and space= O(n)
        
        // Approach 2;
        if (head == NULL || head->next == NULL) {
            return true; 
        }

        // Step 1: Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;         
            fast = fast->next->next;   
        }

        // Step 2: Reverse the second half
        ListNode* secondHalf = reverseList(slow->next);

        // Step 3: Compare both halves
        ListNode* firstHalf = head;
        ListNode* check = secondHalf;
        while (check != nullptr) {
            if (firstHalf->val != check->val) {
                return false; 
            }
            firstHalf = firstHalf->next;
            check = check->next;
        }
        return true;
    }
};