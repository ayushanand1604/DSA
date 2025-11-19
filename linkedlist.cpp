// Function for printing linked list
class Solution {
  public:
    vector<int> printList(Node *head) {
        Node *current=head;
        vector<int> ans;
        while(current!=NULL){
            ans.push_back(current->data);
            current=current->next;
        }
        return ans;
    }
};
// Function for finding the length of linked list
class Solution {
  public:
    int getCount(Node* head) {
        Node* current=head;
        int count=0;
        while(current!=NULL){
            count++;
            current=current->next;
        }
        return count;
    }
};
// Function for inserting at the end of linked list
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *newNode= new Node();
        newNode->data=x;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            return head;
        }
        Node *current=head;
        while(current->next !=NULL){
            current=current->next;
        }
        current->next=newNode;
        return head;
    }
};
// Functions for searching elements in a linked list
class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        Node *current=head;
        while(current!=NULL){
            if(current->data==key){
                return true;
            }
            current=current->next;
        }
        return false;
    }
};
// Functions for deleting the first element in a linked list
class Solution {
  public:
    Node *deleteHead(Node *head) {
        // code here
        if(head==NULL){
            return NULL;
        }
        Node* current=head;
        head=head->next;
        delete current;
        return head;
    }
};
// delete a given node in linkedlist leetcode
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       node->val=node->next->val;
       ListNode* dummy=node->next;
       node->next=dummy->next;
       delete dummy;
    }
};
// return index value of a linked list gfg
class Solution {
  public:
    int GetNth(Node *head, int index) {
        // Code Here
        if(index<1||head==NULL){
            return -1;
        }
        Node *current=head;
        for(int i=1;i<index;i++){
            if(current->next==NULL){
                return -1;
            }
            current=current->next;
        }
        return current->data;
    }
};
// Detect Knth code from end gfg
class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int count=0;
        Node* current=head;
        while(current!=NULL){
            current=current->next;
            count++;
        }
        if(count<k){
            return -1;
        }
        current = head;
        for(int i=1;i<count-k+1;i++){
            current=current->next;
        }
        return current->data;
    }
};