/*
---LinkedList------

Given a LinkedList, inserted all nodes at the end 
Reversing a LinkedList
******
Challenge Question: https://www.interviewbit.com/old/problems/reverse-alternate-k-nodes/


*/
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
node* createNode(int x)
{
	node* nn = new node();
	nn->data = x;
	nn->next = NULL;
	return nn;
}
node* insertAtEnd(node* head, int x)
{
	node *nn = createNode(x);
	node* temp = head;
	if(head==NULL)
		return nn;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next = nn;
	return head;
}
void print(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
node* reverse(node* head)
{
	node *a=head, *b = head,*c=NULL;
	while(b)
	{
		a=a->next;
		b->next = c;	
		c=b;
		b=a;
	}	
	return c;
}
int main()
{
	int n;
	cin>>n;
	node* head = NULL;
	while(n--){
		int x;
		cin>>x;
		head = insertAtEnd(head,x);
	}
	head = reverse(head);
	print(head);	
}
/*
Challenge Question Commit -1


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 *
 --------Hint Code------------
node* reverse(node* head)
{
	node *a=head, *b = head,*c=NULL;
	while(b)
	{
		a=a->next;
		b->next = c;	
		c=b;
		b=a;
	}	
	return c;
}
------Asli Code-----
ListNode* Solution::solve(ListNode* A, int B) 
{
    ListNode *final = A, *traverse = A;
    int flag=0;
    ListNode *a = traverse, *b = traverse, *c =NULL;
	while(traverse)
    {
    	int c = 0;
    	if(flag==0)
    	{
    		while(c<B)
    		{
    			a=a->next;
    			b=
			}
		}
	}
}


*/
