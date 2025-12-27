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
    ListNode* rotateList(ListNode* head){
        ListNode* temp = head;
        while(temp->next && temp->next->next){
            temp = temp->next;
        }
        ListNode* node = temp->next;
        temp->next = NULL;
        node->next = head;
        head = node;
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next==NULL || k==0) return head;
        int n = 0;
        ListNode* temp = head;
        while(temp){
            temp=temp->next;
            n++;
        }
        k = k%n;
        temp = head;
        while(k>0){
            temp = rotateList(temp);
            k--;
        }
        return temp;
    }
};