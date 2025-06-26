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
    ListNode* mergeList(ListNode* head1, ListNode* head2){
        ListNode* res = new ListNode(-1);
        ListNode* resHead = res;
        while(head1 && head2){
            if(head1->val <= head2->val){
                res->next = head1;
                head1 = head1->next;
                res = res->next;
            }
            else{
                res->next = head2;
                head2 = head2->next;
                res = res->next;
            }
        }
        while(head1){
            res->next = head1;
            head1 = head1->next;
            res = res->next;
        }
        while(head2){
            res->next = head2;
            head2 = head2->next;
            res = res->next;
        }
        return resHead->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        if(lists.size()==1) return lists[0];
        ListNode* result = mergeList(lists[0],lists[1]);
        if(lists.size() == 2) return result;
        for(int i=2; i<lists.size(); i++){
            result = mergeList(result, lists[i]);
        }
        return result;
    }
};