#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
        if (head==NULL || head->next==NULL) {
            return head;
        }
        ListNode* newHead=reverseList(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newHead;
}

ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast!=NULL && fast->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1==nullptr) {
            return list2;
        } 
        if (list2==nullptr) {
            return list1;
        }
        if (list1->val < list2->val) {
            list1->next=mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next=mergeTwoLists(list1, list2->next);
            return list2;
        }
}

ListNode* removeElements(ListNode* head, int target) {
        if (head==nullptr) {
            return nullptr;
        }
        head->next=removeElements(head->next, target);
        if (head->val==target) {
            ListNode* nextNode=head->next;
            delete head;
            return nextNode;
        }
        return head;
}