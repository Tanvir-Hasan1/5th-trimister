//#include<stdio.h>
//
//struct Node
//{
//    int data;
//    struct Node* next;
//};
//typedef struct Node node;
//int choice();
//node* createNode();
//void printList(node* head);
//node* insert_head(node* head, node* nn);
//node* insert_tail(node* head, node* nn);
//node* delete_tail(node* head);
//node* push(node* head, int size);
//node* pop(node* head);
//node* top(node* head);
//
//int node_count = 0;
//
//void main()
//{
//    node* head = NULL;
//    node* nn = NULL;
//    int ch = 0, size;
//    puts("enter stack size: "); scanf_s("%d", &size);
//    ch = choice();
//    
//    while (ch)
//    {
//        if (ch == 1)
//        {
//            head = push(head, size);
//
//        }
//        else if (ch == 2)
//        {
//            head = pop(head);
//        }
//        else if (ch == 3)
//        {
//            printf("size is - %d\n", node_count);
//        }
//        else if (ch == 4)
//        {
//            head = top(head);
//        }
//        else puts("invalid input");
//
//        ch = choice();
//
//    }
//}
//
//int choice()
//{
//    printf("1. push\n");
//    printf("2. pop\n");
//    printf("3. size\n");
//    printf("4. top\n");
//    printf("0. exit\n");
//    int ch;
//    printf("\nEnter choice - "); scanf_s("%d", &ch);
//
//    return ch;
//
//}
//
//node* createNode()
//{
//    node* temp;
//    temp = new node();
//    temp->next = NULL;
//    printf("enter value: ");
//    scanf_s("%d", &temp->data);
//    return temp;
//}
//
//void printList(node* head)
//{
//    node* temp;
//    temp = head;
//
//    while (temp != NULL)
//    {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    }
//    printf("\n\n");
//}
//
//node* insert_head(node* head, node* nn)
//{
//    if (head != NULL)
//    {
//        nn->next = head;
//    }
//    head = nn;
//    node_count++;
//    return head;
//}
//
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
//node* push(node* head, int size)
//{
//    node* nn = NULL;
//    nn = createNode();
//    if (node_count == size)
//        puts("Overflow");
//    else
//    {
//        head = insert_tail(head, nn);
//    }
//    return head;
//}
//node* pop(node* head)
//{
//    if (node_count == 0)
//        puts("underflow");
//    else {
//        head = delete_tail(head);
//    }
//    return head;
//}
//node* top(node* head)
//{
//    node* temp = head;
//    if (node_count == 0)
//        puts("empty");
//    else {
//        while (temp->next != NULL)
//        {
//            temp = temp->next;
//        }
//        printf("top is - %d\n", temp->data);
//    }
//    return head;
//}