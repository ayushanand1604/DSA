//1. 102. Binary Tree Level Order Traversal leetcode
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }      
};
 //leetcode 94. Binary Tree Inorder Traversal
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solution(TreeNode* node,vector<int>&ans){
        if(node==NULL) return;
        solution(node->left,ans);
        ans.push_back(node->val);
        solution(node->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        solution(root,ans);
        return ans;
 
    }
};
// 144. Binary Tree Preorder Traversal LEETCODE
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solution(TreeNode* node,vector<int>&ans){
        if(node==NULL) return;
        ans.push_back(node->val);
        solution(node->left,ans);
        solution(node->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        solution(root,ans);
        return ans;
    }
};
145. Binary Tree Postorder Traversal Leetcode
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solution(TreeNode* node,vector<int>&ans){
        if(node==NULL) return;
        solution(node->left,ans);
        solution(node->right,ans);
        ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        solution(root,ans);
        return ans;
    }
};
//Preorder traversal (Iterative) GFG
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> ans;
        if(root==NULL) return ans;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            ans.push_back(root->data);
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return ans;
    }
};

// 104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);
        return 1+max(leftHeight,rightHeight);
    }
};

//543. Diameter of Binary Tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
private:
    int height(TreeNode* root,int &diameter){
        if(root==NULL) return 0;
        int leftHeight=height(root->left,diameter);
        int rightHeight=height(root->right,diameter);
        diameter=max(diameter,leftHeight+rightHeight);
        return 1 + max(leftHeight,rightHeight);
    }
};

// 110. Balanced Binary Tree leetcode 
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
    int height (TreeNode *root) {
        if(root == NULL) return 0;
        int leftHeight= height(root->left);
        if(leftHeight == -1) return -1;
        int rightHeight = height(root->right);
        if(rightHeight == -1) return -1;
        if (abs(leftHeight - rightHeight) > 1) return -1;
        return max (leftHeight,rightHeight) + 1;
    }
};

100. Same Tree leetcode 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL||q==NULL){
            return p==q;
        }
        return (p->val==q->val)&& isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

103. Binary Tree Zigzag Level Order Traversal leetcode

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                level.push_back(temp->val);
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            ans.push_back(level);
        }
        for(int i=0;i<ans.size();i++){
            if(i%2!=0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};

Top View of Binary Tree GFG 
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
// time complexity O(n)
class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(root == nullptr) return ans;
        map<int,int> mpp; // line , node
        queue<pair<Node *,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int line=it.second;
            if(mpp.find(line)==mpp.end()) mpp[line]=node->data;
            if(node->left != nullptr) q.push({node->left,line-1});
            if(node->right != nullptr) q.push({node->right,line+1});
        }
        for(auto it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};