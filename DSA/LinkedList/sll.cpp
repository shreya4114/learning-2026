#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* next;
  Node (int data1) {
    data=data1;
    next=NULL;
  }
};

class Solution {
public: 
  bool searchValue(Node* head, int key) {
    Node* current=head;
    while (current!=NULL) {
      if (current->data==key) {
        return true;
      }
      current=current->next;
    }
    return false;
  }

  int lengthOfLinkedList(Node* head) {
    int count=0;
    Node* temp=head;
    while (temp!=nullptr) {
      count++;
      temp=temp->next;
    }
    return count;
  }

  Node* deleteTail(Node* head) {
    if (head==NULL || head->next==NULL) {
      delete head;
      return NULL;
    }
    Node* curr=head;
    while (curr->next->next!=NULL) {
      curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    return head;
  }
};

int main () {
  Node* head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);
  Solution sol;
  cout << "Length of linked list: " << sol.lengthOfLinkedList(head) << endl;
  if (sol.searchValue(head, 2)) {
    cout << "Found";
  } else {
    cout << "Not Found";
  }
  return 0;
}