#include <bits/stdc++.h>
using namespace std;

struct AVLNode{
    int data;
    AVLNode *left, *right;
    AVLNode(int x){
        data = x;
        left = right = NULL;
    }
};
AVLNode* insert(AVLNode* root, int x){
    if(root==NULL) return new AVLNode(x);
    if(x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    return root;
}

void inHelper(AVLNode* root, vector<int>& v){
    if(root==NULL) return;
    inHelper(root->left, v);
    v.push_back(root->data); //cout << root->data << " ";
    inHelper(root->right, v);
}

vector<int> inOrder(AVLNode* root){
    vector<int> ans;
    inHelper(root, ans);
    return ans;
}

AVLNode* findMax(AVLNode* root){
    if(root==NULL) return NULL;
    while(root->right != NULL)
        root = root->right;
    return root;
}

AVLNode* delNode(AVLNode* root, int x){
    if(root==NULL) return NULL;
    if(x == root->data){ // delete root
        if(root->left==NULL&&root->right==NULL)
            return NULL;
        if(root->right==NULL) // left child
            return root->left;
        if(root->left==NULL) // right child
            return root->right;
        // 2 child
        AVLNode* mx = findMax(root->left);
        root->data = mx->data;
        root->left = delNode(root->left, mx->data);
        return root;

    } else if(x < root->data){
        root->left = delNode(root->left, x);
    } else {
        root->right = delNode(root->right, x);
    }
    return root;
}

void preOrderHelper(AVLNode* root, vector<int>& ans){
    if(root==NULL) return;
    ans.push_back(root->data);
    preOrderHelper(root->left, ans);
    preOrderHelper(root->right, ans);
}
vector<int> preOrder(AVLNode* root){
    vector<int> ans;
    preOrderHelper(root, ans);
    return ans;
}

int main()
{
    AVLNode* root = NULL; // Empty Tree
    int x;
    while(cin>>x){
        root = insert(root, x);
    }
    auto ans = inOrder(root);
    for(int x : ans) cout << x << " ";
    cout << "\n";
    root = delNode(root, 10);
    ans = preOrder(root);
    for(int x : ans) cout << x << " ";

    return 0;
}
