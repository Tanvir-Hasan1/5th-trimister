//#include<stdio.h>
//#include <stdlib.h>
//#include <time.h>
//struct Node {
//	int data;
//	struct Node* next;
//	struct Node* prev;
//};
//
//typedef struct Node node;
//
//// ** protypes **
//int selectOption();
//void printList(node* head);
//void printList_revurse(node* head);
//
//node* createNode();
//node* insertHead(node* head, node* nn);
//node* insertNth(node* head, node* nn, int pos);
//node* insertTail(node* head, node* nn);
//node* delete_head(node* head);
//node* delete_Nth(node* head, int pos);
//node* delete_tail(node* head);
//node* insertrandomly(node* head);
//node* customOrder(node *head);
//
//
//int node_count = 0;
//void main()
//{
//    //setting seed value of rand function;
//    srand(time(NULL));
//    node* head = NULL, *nn;
//    int ch, pos;
//    ch = selectOption();
//    while (ch)
//    {
//        if (ch == 1) {
//            nn = createNode();
//            head = insertHead(head, nn);
//        }
//        else if (ch == 2) {
//            printf("Enter the position to insert: "); scanf_s("%d", &pos);
//            if (pos <= node_count + 1 && pos > 0) {
//                nn = createNode();
//                head = insertNth(head, nn, pos);
//            }
//            else printf("invalis position *** try aganin ***\n\n");
//        }
//        else if (ch == 3) {
//            nn = createNode();
//            head = insertTail(head, nn);
//        }
//        else if (ch == 4) {
//            head = delete_head(head);
//        }
//        else if (ch == 5) {
//            printf("Enter position to delete;");
//            scanf_s("%d", &pos);
//            head = delete_Nth(head, pos);
//        }
//        else if (ch == 6) {
//            head = delete_tail(head);
//        }
//        else if (ch == 7) {}
//        else if (ch == 8) {
//            printf("Total nodes : %d\n\n", node_count);
//        }
//        else if (ch == 9) {
//            printList(head);
//        }
//        else if (ch == 10) {
//            printList_revurse(head);
//        }
//        else if (ch == 11) {}
//        else if (ch == 12)
//        {
//            head = insertrandomly(head);
//        }
//        else if (ch == 13)
//        {
//            head = customOrder(head);
//        }
//        
//        else printf("invalid input. please try anging...\n\n");
//        ch = selectOption();
//    }
//}
//int selectOption()
//{
//    int ch;
//    printf("1. insert (head)\n");
//    printf("2. insert (nth)\n");
//    printf("3. insert (tail)\n");
//    printf("4. delete (head)\n");
//    printf("5. delete (nth)\n");
//    printf("6. delete (tail)\n");
//    printf("8. print list size\n");
//    printf("9. print list\n");
//    printf("10. print list revurse order\n");
//    printf("11. delete 2nd / 3\n");
//    printf("12. insert_randomly\n");
//    printf("13.  customOrder\n");
//    printf("0. exit\n\n");
//
//    printf("enter your option: ");
//    scanf_s("%d", &ch);
//    return ch;
//}
//void printList(node* head)
//{
//    node* temp;
//    temp = head;
//    if (head == NULL)
//        printf("NO node found");
//    while (temp != NULL)
//    {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    }
//    printf("\n\n");
//}
//void printList_revurse(node* head) {
//    node* temp;
//    temp = head;
//    if (head == NULL)
//        printf("NO node found");
//    while (temp->next!= NULL)
//    {
//        temp = temp->next;
//    }
//
//    do
//    {
//        printf("%d ", temp->data);
//        temp = temp->prev;
//    } while (temp != NULL);
//    printf("\n\n");
//}
//
//node* createNode()
//{
//	node* temp;
//	temp = new node();
//	temp->next = NULL;
//	temp->prev = NULL;
//	printf("Enter value: ");
//	scanf_s("%d", &temp->data);
//
//	return temp;
//}
//node* insertHead(node* head, node* nn)
//{
//    if (head != NULL)
//    {
//        nn->next = head;
//        nn->prev = NULL;
//    }else
//    head = nn;
//    node_count++;
//    return head;
//}
//node* insertNth(node* head, node* nn, int pos)
//{
//    node* temp;
//    temp = head;
//    if (pos == 1)
//        head = insertHead(head, nn);
//    else if (pos == node_count + 1)
//        head = insertTail(head, nn);
//    else {
//        for (int i = 1; i < pos-1; i++)
//        {
//            temp = temp->next;
//        }
//        nn->next = temp->next;
//        nn->next->prev = nn;
//        temp->next = nn;
//        nn->prev = temp;
//        node_count++;
//    }
//    return head;
//
//}
//node* insertTail(node* head, node* nn)
//{
//    node* temp;
//    temp = head;
//    if (temp == NULL)
//    {
//        head = insertHead(head, nn);
//    }
//    else {
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//        temp->next = nn;
//        nn->prev = temp;
//        node_count++;
//    }
//    return head;
//}
//node* delete_head(node* head)
//{
//    node* temp;
//    temp = head;
//    if (node_count == 1)
//    {
//        delete(temp);
//        head = NULL;
//        node_count--;
//    }
//
//    else {
//        head = head->next;
//        head->prev = NULL;
//        delete(temp);
//        node_count--;
//    }
//    return head;
//}
//node* delete_tail(node* head)
//{
//    node* temp;
//    temp = head;
//    if (node_count == 1)
//        head = delete_head(head);
//    else {
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
//node* delete_Nth(node* head, int pos) {
//    node* temp, *dlt;
//    temp = head;
//    if (pos == 1)
//        head = delete_head(head);
//    else if (pos == node_count)
//    {
//        head = delete_tail(head);
//    }
//    else
//    {
//        for (int i = 1; i < pos - 1; i++)
//        {
//            temp = temp->next;
//        }
//        dlt = temp->next;
//        temp->next = dlt->next;
//        dlt->next->prev = temp;
//        delete(dlt);
//        node_count--;
//
//    }
//    return head;
//    
//}
//node* insertrandomly(node* head)
//{
//    int n;
//    node* temp;
//    temp = head;
//    printf("Enter the number of element you want to insert: ");
//    scanf_s("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        temp = new node();
//        temp->next = NULL;
//        temp->prev = NULL;
//        temp->data = rand() % 100 + 1;
//        head = insertTail(head, temp);
//    }
//    return head;
//}
//node* customOrder(node* head)
//{
//    node* temp1, *temp2, *temp, *nn;
//    temp1 = head;
//    temp = head;
//
//    int apper_count = 0, key;
//
//    int pos=0;
//    
//    for(int i=1; i<node_count; i++)
//    {
//        key = temp1->data;
//
//        temp = head;
//
//        while (temp != NULL)
//        {
//            pos++;
//            if (key == temp->data)
//            {
//                apper_count++;
//                head = delete_Nth(head, pos);
//                
//            }
//            temp = temp->next;
//        }
//        pos = 0;
//        for (int i = 0; i < apper_count; i++)
//        {
//            nn = new node();
//            nn->data = key;
//            nn->next = NULL;
//            head = insertHead(head, nn);
//             
//        }
//        apper_count = 0;
//        temp1 = temp1->next;
//    }
//    return head;
//}
