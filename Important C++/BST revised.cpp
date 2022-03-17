//hemanth_5585 code
#include<bits/stdc++.h>
//#define hemanth_5585
typedef long long int ll;
ll i,j;
ll mod = pow(10,9)+7;
using namespace std;
/*
	Code to perform the following the operations on BST
	1. Insert
	2. Delete
	3. Pre order traversal
	4.In order traversal
	5. Post order traversal Left, Right, Root
*/
void yes(){
	cout<<"YES"<<endl;
}
void no(){
	cout<<"NO"<<endl;
}
struct BSTNode{
	int data;
	struct BSTNode* left, *right;
};
BSTNode* createNode(int x)
{
	BSTNode* nn = 	(BSTNode*)(malloc(sizeof(BSTNode)));
	nn->data = x;
	nn->left = NULL;
	nn->right = NULL;
	return nn;
}
BSTNode* insertNode(BSTNode* root, int x)
{
	if(root==NULL)
	{
		BSTNode* nn = createNode(x);
		return nn;
	}
	if(x<root->data)
	{
		return insertNode(root->left,x);
	}
	return insertNode(root->right,x);
}
void inOrder(BSTNode* root)
{
	if(root==NULL)
		return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);	
}
void preOrder(BSTNode* root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
void postOrder(BSTNode* root)
{
	if(root==NULL)
		return;
	postOrder(root->right);
	postOrder(root->left);
	cout<<root->data<<" ";
}
BSTNode* findMax(BSTNode* root)
{
	if(root==NULL) return NULL;
	if(root->right!=NULL) return findMax(root->right);
	return root;
}
BSTNode* deleteNode(BSTNode* root, int x)
{
	if(root==NULL) return NULL;
	if(x==root->data)
	{
		if(root->data==x && root->right==NULL && root->left==NULL) // no child and delete root
			return NULL;
		if(root->data==x && root->left==NULL) //have only right child node
		{
			root=root->left;
			return root;
		}
		if(root->data==x && root->right==NULL) //have only left child node
		{
			root=root->right;
			return root;
		}
		//if all the cases are false then the root has two children and delete root node;
		// now find the max element in left side of root;
		BSTNode* max = findMax(root->left);
		root->data = max->data;
		root->left = deleteNode(root->left,max->data);	
		return root;
	}
	else if(x<root->data)
	{
		root->left = deleteNode(root->left,x);
	}
	else if(x>root->data)
	{
		root->right = deleteNode(root->right,x);
	}
	return root;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	BSTNode* root = NULL;
	while(n--)
	{
		int x;
		cin>>x;
		root = insertNode(root, x);
	}
	BSTNode* temp = root;
	cout<<"InOrder\n";
	inOrder(root);
	cout<<"\n";
	cout<<"PreOrder\n";
	preOrder(root);
	cout<<"\n";
	cout<<"Post Order\n";
	postOrder(root);
	cout<<"\n";
	int k;
	cin>>k;
	while(k--)
	{
		int x;
		cin>>x;
		root = deleteNode(root, x);
	}
	inOrder(root);
}


