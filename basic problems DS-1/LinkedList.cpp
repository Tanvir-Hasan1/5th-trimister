#include<stdio.h>
#include <time.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node node;

//Function prototypes
int selectOption();
node* createNode();
void printList(node* head);
node* insert_head(node* head, node* nn);
node* insert_tail(node* head, node* nn);
node* insert_nth(node* head, node* nn, int pos);
node* delete_head(node* head);
node* delete_tail(node* head);
node* delete_nth(node* head, int pos);
node* createNoderand();
int ifavailable(node* head, int data)
{
    node* temp;
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (data == temp->data) {
            count++;
        }
        temp = temp->next;
    }
    return count;
}



int node_count = 0;

void main()
{
    srand(time(NULL));
    node* head = NULL, * nn;

    int ch, pos;
    ch = selectOption();

    while (ch)
    {
        if (ch == 1)
        {
            nn = createNode();
            head = insert_head(head, nn);
        }
        else if (ch == 2)
        {
            printf("enter position: ");
            scanf_s("%d", &pos);
            if (pos >= 1 && pos <= node_count + 1)
            {
                nn = createNode();
                head = insert_nth(head, nn, pos);
            }
            else
            {
                printf("invalid position.\n\n");
            }

        }
        else if (ch == 3)
        {
            nn = createNode();
            head = insert_tail(head, nn);
        }
        else if (ch == 4)
        {
            head = delete_head(head);
        }
        else if (ch == 5)
        {
            head = delete_tail(head);
        }
        else if (ch == 6)
        {
            scanf_s("%d", &pos);
            head = delete_nth(head, pos);
        }
        else if (ch == 7)
        {
            int available2times;
            int available1time;
            int N, v;
            printf("Please enter a number: ");
            scanf_s("%d", &N);
            for (int i = 0; i < N; i++)
            {

                node* temp;

                temp = new node();
                temp->next = NULL;
                temp->data = rand() % 100 + 1;
                if (ifavailable(head, temp->data) == 1)
                {
                    head = insert_tail(head,temp);
                }
                
                head = insert_head(head, temp);
            }
        }
        else if (ch == 8)
        {
            printf("list size: %d\n", node_count);
        }
        else if (ch == 9)
        {
            printList(head);
        }
        else
        {
            printf("invalid option. please try again...\n\n");
        }
        ch = selectOption();
    }
}

int selectOption()
{
    int ch;
    printf("1. insert (head)\n");
    printf("2. insert (nth)\n");
    printf("3. insert (tail)\n");
    printf("4. delete (head)\n");
    printf("5. delete (tail)\n");
    printf("6. delete (nth)\n");
    printf("7. insert randomly generated value\n");
    printf("8. print list size\n");
    printf("9. print list\n");
    printf("0. exit\n\n");

    printf("enter your option: ");
    scanf_s("%d", &ch);
    return ch;
}

node* createNode()
{
    node* temp;
    temp = new node();
    temp->next = NULL;
    printf("enter value: ");
    scanf_s("%d", &temp->data);
    return temp;
}

node* createNoderand()
{
    srand(time(NULL));
    node* temp;
    temp = new node();
    temp->next = NULL;
    temp->data = rand() % 100 + 1;
    return temp;
}

void printList(node* head)
{
    node* temp;
    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

node* insert_head(node* head, node* nn)
{
    if (head != NULL)
    {
        nn->next = head;
    }
    head = nn;
    node_count++;
    return head;
}

node* insert_tail(node* head, node* nn)
{
    if (head == NULL)
    {
        head = insert_head(head, nn);
    }
    else
    {
        node* temp;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;
        node_count++;
    }

    return head;
}

node* insert_nth(node* head, node* nn, int pos)
{
    if (pos == 1)
    {
        head = insert_head(head, nn);
    }
    else if (pos == node_count + 1)
    {
        head = insert_tail(head, nn);
    }
    else
    {
        node* temp;
        temp = head;
        int i;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        nn->next = temp->next;
        temp->next = nn;
        node_count++;
    }

    return head;
}

node* delete_head(node* head)
{
    node* temp;
    if (head == NULL)
    {
        printf("no node is available.\n\n");
    }
    else {
        temp = head;
        head = head->next;
        delete(temp);
        node_count--;
    }
    return head;
}

node* delete_tail(node* head) {
    int i = node_count;
    if (node_count < 2)
        delete_head(head);
    else
    {
        node* temp;
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
        node_count--;
    }

    return head;
}

node* delete_nth(node* head, int pos) {
    if (pos == 1)
        head = delete_head(head);
    else if (pos == node_count)
        head = delete_tail(head);
    else {
        node* temp, * dlt;
        temp = head;
        while (pos-- - 2 > 0)
        {
            temp = temp->next;
        }
        dlt = temp->next;
        temp->next = dlt->next;
        delete(dlt);
        node_count--;
    }
    return head;
}