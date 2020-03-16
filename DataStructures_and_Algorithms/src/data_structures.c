/*
	This is a translation unit that stores the function definitions for the 
	following primitive data structures:
	1. Linked List
	2. Arrays

	and the following abstract data structures
	1. Min heap
	2. Stacks
	3. Queues
*/

#include "data_structures.h"
//#include <math.h>
#include <stdlib.h>	
#include <stdio.h>
// node structure
struct node
{
	int data;
	struct node* next;// pointer to a struct node variable
};

//// Linked List implementation
// create a linked list
struct node* create_LL(int data)
{
	struct node* head = (struct node*)malloc(sizeof(struct node*));
	head->data = data;
	head->next = NULL;

	return head;
}

// adding nodes to end of the list
void add_node_LL(struct node* head, int data)
{
	struct node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}

	// create and add the new node
	temp->next = (struct node*)malloc(sizeof(struct node*)); 
	// insert the data 
	temp->next->data = data;
	// set the self-referencing pointer to NULL
	temp->next->next = NULL;
}

// delete ith node from LL
struct node* delete_node_LL(struct node* head,int i){
	struct node* temp = head;
	struct node* temp2;

	//// case 1: 1st node

	if(i==0){
	// store the address of the node to be del
	temp2 = temp;
	temp = temp->next;
	free(temp2);
	return temp;
	}

	//// case 2: other nodes

	// get to the node that has to be deleted
	for(;i>1;i--){
		temp = temp->next;
	}	

	// store the address of the node to be del
	temp2 = temp->next;
	// remove the required node from the LL
	temp->next = temp->next->next;
	// free the ptr
	free(temp2);
	return head;
}

// traversing the LL
void traverse_LL(struct node* head){
	struct node* temp = head;
	while(temp!=NULL){
		LOG(temp->data);
		temp = temp->next;
	}
}

// finding the length of the LL
int length_LL(struct node* head){
	struct node* temp = head;
	int count=0;
	while(temp!=NULL){
		count+=1;
		temp = temp->next;
	}	
	return count;
}

// reverse the LL
struct node* reverse_LL(struct node* head){
	struct node* temp1;
	struct node* temp2;

	// case 1: elems = 1
	if (head->next==NULL)
	{
		return head;
	}

	// case 2: elems>=2
	temp1 = head->next;
	temp2 = temp1->next;

	temp1->next = head;
	head->next = NULL;
	head = temp1;

	while(temp2!=NULL){
		temp1 = temp2;
		temp2 = temp1->next;
		temp1->next = head;
		head = temp1;
	}

	return temp1;
}


//// Stack implementation using linked list
/*
	Details:
	for a stack we need to maintain one pointer for the top
	of the stack.
*/

// create a new stack
struct node* create_stack(int data){
	return create_LL(data);
}

// return top of the stack
int top_stack(struct node* top){
	return top->data;
}

// pushes data into the stack and returns the top pointer
struct node* push_stack(struct node* top, int data){
	// as it is a stack so insertion at the head
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	
	if (temp==NULL) printf("malloc error");
	
	temp->next = top;
	temp->data = data;
	top = temp;
	free(temp);

	return top;
}

// deletes the top node and returns the top pointer
struct node* pop_stack(struct node* top){
	struct node* temp = top;
	top = top->next;

	free(temp);

	return top;
}

//// Queue implementation using linked list
/*
	Details:
	for a queue we need to maintain two pointers, one for the front 
	of the queue and one for the rear.
*/

// create a new queue
struct node* create_queue(int data){
	return create_LL(data);
}

// return either head or rear nodes value in the queue
int val_queue(struct node* ptr){
	return ptr->data;
}

// enqueue data into the queue 
struct node* enqueue(struct node* rear, int data){
	// as it is a stack so insertion at the head
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	
	if (temp==NULL) printf("malloc error");
	
	temp->data = data;
	temp->next = NULL;
	rear->next = temp;
	rear = temp;
	free(temp);

	return rear;
}

// deletes the top/head of the queue
struct node* dequeue(struct node* top){
	struct node* temp = top;
	top = top->next;

	free(temp);

	return top;
}

//// Min-Heap implementation
/*
	Details:
	* This heap is a complete or almost complete binary tree.
	* Min-heap implies that root's value is <= its children's values
	* This is an array implementation. (index of arr starts from 0)
		* Procedure for building the tree is as follows: 
			(a) right child of index i: 2*(i+1)
			(b) left child of index i: 2*(i+1)-1
			(c) parent of index i: floor(i/2)
*/

void min_Heapify(int A[], int i, int n){
	int l = 2*(i+1)-1; // right child of index i
	int r = 2*(i+1);   // left child of index i
	int smallest,temp;

	if(l<n && A[l]<A[i]){
		smallest = l;
	}
	else
		smallest = i;
	if (r<n && A[r]<A[smallest])
	{
		smallest = r;
	}

	if (smallest!=i)
	{
		// swap A[i] and A[smallest]
		temp = A[i];
		A[i] = A[smallest];
		A[smallest] = temp;


		// recurse on the swapped sub tree to ensure 
		// min-heap property is maintained in it.
		min_Heapify(A,smallest,n);
	}
}

void build_MinHeap(int arr[], int n){
	for(int i = n/2; i>=0; i--){
		min_Heapify(arr,i,n);
	}
}