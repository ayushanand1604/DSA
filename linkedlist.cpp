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
// find the occurances in linked list
class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        if(head==NULL){
            return NULL;
        }
        Node* current=head;
        int count=0;
        while(current!=NULL){
            if(current->data==key){
                count++;
                current=current->next;
            }
            else{
                current=current->next;
            }
        }
        return count;
    }
};
// Check whether is a doubly linked list or not gfg
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if(head==NULL){
            return true;
        }
        Node *current=head;
        while(current && current->next != head){
        current=current->next;
        }
        if(current==NULL){
            return false;
        }
        return true;
    }
};
// Remove kth node from end Linked List gfg
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* current=head;
        while(current!=nullptr){
            current=current->next;
            count++;
        }
        if(n==count){
            ListNode* current=head;
            head=head->next;
            delete current;
            return head;
        }
        current=head;
        for(int i=1;i<count-n;i++){
            current=current->next;
        }
        ListNode* dummy=current->next;
        current->next=dummy->next;
        delete dummy;
        return head;
    }

};
// middle of the linked list leetcode
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};
// delete middle of linked list
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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return nullptr;
        }
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *dummy=nullptr;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            dummy=slow;
            slow=slow->next;
        }
        dummy->next=slow->next;
        delete slow;
        return head;
    }
};
// Insertion in doubly linked list gfg 
class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        Node *newNode=new Node(x);
        if(head==nullptr){
            return newNode;
        }
        Node *temp=head;
        for(int i=0;i<p&&temp!=nullptr;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        newNode->prev=temp;
        if(temp->next!=nullptr){
            temp->next->prev=newNode;
        }
        temp->next=newNode;
        return head;
    }
};
// Remove every kth node from linked list gfg
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        if(k<=1)return NULL;
        Node* current=head;
        int count=1;
        Node* prev=NULL;
        while(current){
            if((count%k)==0){
                prev->next=current->next;
            }
            else{
                prev=current;
            }
            current=current->next;
            count++;
        }
        return head;
    }
};
// detect loop in linked list gfg floyd cycle
*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */
class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        if(head==NULL){
            return false;
        }
        while(slow!=NULL&&fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;;
    }
};
// pairwise swap in linkedlist gfg
class Solution {
  public:
    Node *pairwiseSwap(Node *head) {
        // code here
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node* prev=NULL;
        Node* cur=head;
        int index = 1;
        while(cur!=NULL&&cur->next!=NULL){
            if(index%2==1){
                Node* ans=cur->next;
                cur->next=ans->next;
                ans->next=cur;
                if(prev!=NULL){
                    prev->next=ans;
                }
                else{
                    head=ans;
                    
                }
                prev=cur;
                cur=cur->next;
                index+=2;
            }
        }
        return head;
    }    
};
// 2.Add two numbers leetcode
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* cur=ans;
        int carry=0;
        while(l1!=nullptr||l2!=nullptr||carry!=0){
            int sum=carry;
            if(l1!=nullptr){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            cur->next=new ListNode(sum%10);
            cur=cur->next;
       }
       return ans->next;
    }
};