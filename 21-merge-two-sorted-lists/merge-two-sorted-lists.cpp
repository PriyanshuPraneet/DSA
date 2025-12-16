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
        while(list1 && list2){
            if(list1->val < list2->val){
                resHead->next = list1;
                list1 = list1->next;
                resHead = resHead->next;
            }
            else{
                resHead->next = list2;
                list2 = list2->next;
                resHead = resHead->next;
            }
        }
        while(list1){
            resHead->next = list1;
            list1 = list1->next;
            resHead = resHead->next;
        }
        while(list2){
            resHead->next = list2;
            list2 = list2->next;
            resHead = resHead->next;
        }
        return res->next;
    }
};