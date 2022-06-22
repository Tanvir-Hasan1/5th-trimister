//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include "problem 4.h"
//struct Node {
//	int data;
//	struct Node* next;
//};
//typedef struct Node node;
//
////                                            >>>> prototypes <<<<
//int selectOption();
//node* insert_rand(node* head);
//void printList(node* head);
//node* even_TO_odd(node* head);
//node* insert_head(node* head, node* nn);
//node* delete_head(node* head);
//node* delete_tail(node* head);
//node* delete_nth(node* head, int pos);
//node* customSort(node* head);
//node* sortEven(node* head);
//node* swap(node* head, node* current, node* prev);
//
//
//int node_count=0;
//int main()
//{
//	int ch = 0;
//	node* head = NULL;
//	srand(time(NULL));
//	while (ch = selectOption())
//	{
//		if (ch == 1)
//		{
//			head = insert_rand(head);
//		}
//		else if (ch == 2) {
//			head = even_TO_odd(head); 
//			head = customSort(head);
//		}
//		else if(ch == 3){
//			printList(head);
//		}
//	}
//	return 0;
//}
//int selectOption()
//{
//	int ch;
//
//	printf("**** welcome ****\n");
//	printf("1. insert random\n");
//	printf("2. Separate odd even\n");
//	printf("3. print list\n");
//	printf("0. exit\n\n");
//
//	printf("enter your option: ");
//	scanf_s("%d", &ch);
//	return ch;
//}
//node* insert_rand(node* head)
//{
//	node* nn = NULL;
//	int n = 0;
//	printf("please enter a number - ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		nn = new node();
//		nn->next = NULL;
//		nn->data = rand() % 100 + 1;
//		head = insert_head(head, nn);
//	}
//	return head;
//}
//void printList(node* head)
//{
//	printf("total nodes - %d\n", node_count);
//	node* temp = head;
//	while (temp != NULL)
//	{
//		printf("%d, ", temp->data);
//		temp = temp->next;
//	}
//	printf("\n\n");
//}
//node* even_TO_odd(node* head)
//{
//	node* temp = head;
//	    node* nn = NULL;
//	    printf("before operation ->>>  ");
//	    printList(head);
//	    for (int i = 1; i <= node_count ; i++)
//	    {
//	        if (temp->data % 2 == 0)
//	        {
//	            nn = new node();
//	            nn -> data = temp->data;
//	            temp = temp->next;
//	            head = delete_nth(head, i);
//	            head = insert_head(head, nn);
//	   
//	        }
//	        else temp = temp->next;
//	    }
//	    printf("After operation ->>> ");
//	    printList(head);
//	    return head;
//
//}
//node* insert_head(node* head, node* nn)
//{
//	if (head != NULL)
//	{
//		nn->next = head;
//	}
//	head = nn;
//	node_count++;
//	return head;
//}
//node* delete_nth(node* head, int pos)
//{
//    if (pos == 1)
//        head = delete_head(head);
//    else if (pos == node_count)
//        head = delete_tail(head);
//    else
//    {
//        node* temp, * dlt;
//        temp = head;
//        while (pos-- - 2 > 0)
//        {
//            temp = temp->next;
//        }
//        dlt = temp->next;
//        temp->next = dlt->next;
//        delete(dlt);
//        node_count--;
//    }
//    return head;
//}
//node* delete_head(node* head)
//{
//    if (head == NULL)
//    {
//        printf("nothing to delete.\n\n");
//    }
//    else
//    {
//        node* temp;
//        temp = head;
//        head = head->next;
//        delete(temp);
//        node_count--;
//    }
//    return head;
//}
//node* delete_tail(node* head)
//{
//    if (node_count < 2)
//        head = delete_head(head);
//    else
//    {
//        node* temp;
//        temp = head;
//
//        while (temp->next->next != NULL)
//        {
//            temp = temp->next;
//        }
//        delete(temp->next);
//        temp->next = NULL;
//        node_count--;
//    }
//    return head;
//}
//node* customSort(node* head)
//{
//	head = sortEven(head);
//	return head;
//}
//node* sortEven(node* head)
//{
//	node* current,  *prev;
//	prev = head;
//	current = prev->next;
//	while (current->data % 2 != 1 )
//	{
//		if (current->data <= prev->data)
//		{
//			prev->next = current->next;
//			current->next = prev;
//			if (prev == head)
//				head = current;
//		}
//		else {
//			current = current->next;
//			prev = prev->next;
//		}
//		current = prev->next;
//		
//	}
//	return head;
//
//}
//node* swap(node* head, node* current, node* prev)
//{
//	prev->next = current->next;
//	current->next = prev;
//	if (prev == head)
//		head = current;
//	return head;
//}
//
