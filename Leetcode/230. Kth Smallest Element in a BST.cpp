//Leetcode 230. Kth Smallest Element in a BST(https://leetcode.com/problems/kth-smallest-element-in-a-bst/)

#include <bits/stdc++.h> 
using namespace std;
 
 
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
    int kthSmallest(TreeNode* root, int k) {
        TreeNode *temp = root;stack<TreeNode*> s;int i =0;
        while(temp != nullptr){
            s.push(temp);
            temp = temp->left;
        }
        while(k != 0 || !s.empty()){
            temp = s.top();s.pop();
            cout<<temp->val<<" ";
            k--;
            if(k== 0)return temp->val;
            temp = temp->right;
             while(temp != nullptr){
                 s.push(temp);cout<<temp->val<<" ";
                temp = temp->left;
             }
        }
        return i;
    }
};