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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res = new ListNode(-1);
        ListNode* resHead = res;
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                res->next = list1;
                res = res->next;
                list1 = list1->next;
            }
            else{
                res->next = list2;
                res = res->next;
                list2 = list2->next;
            }
        }
        while(list1 != NULL){
            ListNode* newNode = new ListNode(list1->val);
            res->next = newNode;
            res = res->next;
            list1 = list1->next;
        }
        while(list2 != NULL){
            ListNode* newNode = new ListNode(list2->val);
            res->next = newNode;
            res = res->next;
            list2 = list2->next;
        }
        return resHead->next;
    }
};