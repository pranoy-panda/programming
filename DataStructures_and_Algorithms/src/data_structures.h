#pragma once // header guard
#define LOG(x) { printf("%d\t", x);}

// LL
struct node* create_LL(int data);
void add_node_LL(struct node* head, int data);
struct node* delete_node_LL(struct node* head,int i);
void traverse_LL(struct node* head);
struct node* reverse_LL(struct node* head);

// Stack
struct node* create_stack(int data);
int top_stack(struct node* top);
struct node* push_stack(struct node* top, int data);
struct node* pop_stack(struct node* top);

// Queue
struct node* create_queue(int data);
int val_queue(struct node* ptr);
struct node* enqueue(struct node* rear, int data);
struct node* dequeue(struct node* top);

// Min Heap
void build_MinHeap(int arr[], int n);
void min_Heapify(int A[], int i, int n);
