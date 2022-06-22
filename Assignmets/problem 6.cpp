//#include<stdio.h>
//#include <time.h>
//#include<stdlib.h>
//
//struct Node {
//	int data;
//	struct Node* next;
//};
//typedef struct Node node;
//// ***** prototypes *****
//int selectOption();
//node* insert_head(node* head, node* nn);
//void printList(node* head);
//node* insert_rand(node* head);
//node* even_TO_odd(node* head);
//node* odd_TO_even(node* head);
//node* seperateOddEven(node* head, int direction);
//node* notMoreThanTwo(node* head, int value);
//int get_occurance(node* head, int value);
//int get_position(node* head, int value);
//node* delete_head(node* head);
//node* delete_nth(node* head, int pos);
//node* delete_tail(node* head);
//
//int node_count = 0;
//int main()
//{
//	srand(time(NULL));
//	int ch=0;
//	node* head = NULL, * nn=NULL;
//	while (ch = selectOption())
//	{
//		if (ch == 1) { 
//			head = insert_rand(head);
//        }
//        else if (ch == 2)
//        {
//            int direction = 0;
//            printf("Enter direction - ");
//            scanf_s("%d", &direction);
//            if ((direction > 0 && direction < 3))
//                head = seperateOddEven(head, direction);
//            else printf("wrong direction\n");
//        }
//		else if (ch == 3) {
//			printList(head);
//		}
//		else printf("wrong input");
//	}
//	return 0;
//}
//int selectOption()
//{
//    int ch;
//
//	printf("**** welcome ****\n");
//    printf("1. insert random\n");
//    printf("2. Separate odd even\n");
//	printf("3. print list\n");
//    printf("0. exit\n\n");
//
//    printf("enter your option: ");
//    scanf_s("%d", &ch);
//    return ch;
//}
//node* insert_rand(node* head)
//{
//    int n = 0;
//    printf("please enter a number - ");
//    scanf_s("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        int value = rand() % 100 + 1;
//        head = notMoreThanTwo(head, value);
//    }
//    return head;
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
//node* insert_tail(node* head, node* nn)
//{
//    if (head == NULL)
//    {
//        head = insert_head(head, nn);
//    }
//    else
//    {
//        node* temp;
//        temp = head;
//        while (temp->next != NULL)
//        {
//            temp = temp->next;
//        }
//        temp->next = nn;
//        node_count++;
//    }
//
//    return head;
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
//    node* temp = head;
//    node* nn = NULL;
//    printf("before operation ->>>  ");
//    printList(head);
//    for (int i = 1; i <= node_count ; i++)
//    {
//        if (temp->data % 2 == 0)
//        {
//            nn = new node();
//            nn -> data = temp->data;
//            temp = temp->next;
//            head = delete_nth(head, i);
//            head = insert_head(head, nn);
//   
//        }
//        else temp = temp->next;
//    }
//    printf("After operation ->>> ");
//    printList(head);
//    return head;
//
//}
//node* odd_TO_even(node* head)
//{
//    node* temp = head;
//    node* nn = NULL;
//    printf("before operation ->>>  ");
//    printList(head);
//    for (int i = 1; i <= node_count; i++)
//    {
//        if (temp->data % 2 != 0)
//        {
//            nn = new node();
//            nn->data = temp->data;
//            temp = temp->next;
//            head = delete_nth(head, i);
//            head = insert_head(head, nn);
//
//        }
//        else temp = temp->next;
//    }
//    printf("After operation ->>> ");
//    printList(head);
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
//node* seperateOddEven(node* head, int direction)
//{
//    if (direction == 2)
//    {
//        head = even_TO_odd(head);
//    }
//    else head = odd_TO_even(head);
//    return head;
//}
//node* notMoreThanTwo(node* head, int value)
//{
//    int occur, pos;
//    node* temp = head, *nn=NULL;
//    nn = new node();
//    nn->data = value;
//    nn->next = NULL;
//    occur = get_occurance(head, value);
//    if (occur == 0) {
//        printf("%d inserted\n",value);
//        head = insert_head(head, nn);
//    }
//    else if (occur == 1) {
//        printf("%d inserted\n", value);
//        head = insert_tail(head, nn);
//    }
//    else if (occur == 2) {
//        pos = get_position(head, value);
//        printf("%d deleted\n",value);
//        head = delete_nth(head, pos);
//    }
//    return head;
//}
//int get_occurance(node* head, int value)
//{
//    int occur = 0;
//    node* temp = head;
//    while (temp != NULL)
//    {
//        if (temp->data == value)
//            occur++;
//        temp = temp->next;
//    }
//    return occur;
//}
//int get_position(node* head, int value)
//{
//    int pos = 0;
//    node* temp = head;
//    while (temp->data != value)
//    {
//        temp = temp->next;
//        pos++;
//    }
//    return pos;
//}
