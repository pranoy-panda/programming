#include <stdio.h>
#include <stdlib.h>
#include "data_structures.h"

// call by reference
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void test_swap_func()
{
	int a=10,b=20;
	printf("Initially \n");
	LOG(a);
	LOG(b);
	swap(&a,&b);
	printf("After swapping\n");
	LOG(a);
	LOG(b);	
}	


void test_singly_LL()
{
	int data=10;
	struct node* head_ptr = create_LL(data);
	add_node_LL(head_ptr,20);
	add_node_LL(head_ptr,-3);
	add_node_LL(head_ptr,5);
	add_node_LL(head_ptr,33);
	add_node_LL(head_ptr,2000);
	add_node_LL(head_ptr,-10);

	printf("\nInitial LL\n");
	traverse_LL(head_ptr);

	head_ptr = delete_node_LL(head_ptr,2);
		
	printf("\nafter deletion LL\n");
	traverse_LL(head_ptr);

	head_ptr = reverse_LL(head_ptr);
	printf("\nafter reversal of LL\n");
	traverse_LL(head_ptr);

}

void test(int arr[]){
	arr[0]+=1;
}
void test_minHeap()
{
	int arr[] = {16,14,12,8,6,5,1};
	int n = 7;

	printf("\nInitial heap\n");
	for(int i=0;i<n;i++){
		LOG(arr[i]);
	}

	build_MinHeap(arr,n);

	printf("\nFinal heap: min Heap\n");
	for(int i=0;i<n;i++){
		LOG(arr[i]);
	}
}
int main(int argc, char const *argv[])
{
	// Multidimensional array 
	/*
		uses extra space as the array has to be
		defined w.r.t. longest length string
	*/
	char arr[3][6] = {"Pranoy","Panda"}; 

	// Array of ptrs
	/*
		uses less space(except the additional
		 space for pts)
	*/
	char* name[] = {"Pranoy","Panda"};

	//test_singly_LL();
	test_minHeap();
	return 0;
}
