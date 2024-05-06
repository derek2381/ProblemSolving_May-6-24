// problem link
// https://leetcode.com/problems/remove-nodes-from-linked-list/?envType=daily-question&envId=2024-05-06

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
    ListNode* removeNodes(ListNode* head) {
        stack<struct ListNode *> stk;
        // stk.push(head);
        // return stk.top();

        struct ListNode *temp = head;

        while(temp){
            if(stk.size() == 0){
                stk.push(temp);
            }else if(stk.size() > 0 && stk.top()->val < temp->val){
                while(stk.size() > 0 && stk.top()->val < temp->val){
                    stk.pop();
                }

                stk.push(temp);
            }else{
                stk.push(temp);
            }
            temp = temp->next;
        }

        temp = NULL;

        while(stk.size() > 0){
            stk.top()->next = temp;
            temp = stk.top();
            stk.pop();
        }

        head = temp;
        return head;

    }
};
