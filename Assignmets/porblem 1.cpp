#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_NUM 100

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node node;

node* customOrder(node*);
char getMinIndex(int*);

int main(void) {
    int N;
    node* listHead = (node*)malloc(sizeof(node));
    node* iteratorPtr = listHead;
   
    // get the list size
    printf("N: ");
    
    do {
        scanf_s("%d", &N);
    } while (N <= 0);

    // initialize the linked list
    for (int i = 0; i < N; i++) {
        iteratorPtr->data = rand() % 100 + 1;

        if (i + 1 != N) {
            iteratorPtr = iteratorPtr->next = (node*)malloc(sizeof(node));
        }
        else {
            iteratorPtr->next = NULL;
        }
    }

    // print the linked list in general order
    iteratorPtr = listHead;
    printf("List: ");

    while (iteratorPtr) {
        printf("%d ", iteratorPtr->data);
        iteratorPtr = iteratorPtr->next;
    }

    printf("\n\n");

    // print the linked list in custom order
    iteratorPtr = listHead = customOrder(listHead);

    while (iteratorPtr) {
        printf("%d ", iteratorPtr->data);
        iteratorPtr = iteratorPtr->next;
    }

    printf("\n");
    return 0;
}

node* customOrder(node* listHead) {
    int numberFreqs[MAX_NUM + 1] = {};
    node* iteratorPtr = listHead;
    node* iterationStartAt = listHead;
    char minIndex;

    // save the number frequencies
    do {
        numberFreqs[iteratorPtr->data]++;
        iteratorPtr = iteratorPtr->next;
    } while (iteratorPtr);

    // set iteration start point
    iteratorPtr = listHead;
    minIndex = getMinIndex(numberFreqs);

    while (iteratorPtr->next && iteratorPtr->next->data != minIndex) {
        iteratorPtr = iteratorPtr->next;
    }

    if (iteratorPtr->next) {
        // save the node
        node* matchedNode = iteratorPtr->next;
        // delete the node
        iteratorPtr->next = iteratorPtr->next->next;
        // set the node as the first node
        matchedNode->next = listHead;
        // change listHead and iteration start point
        listHead = iterationStartAt = matchedNode;
    }

    // reorder the list
    while (1) {
        char minIndex = getMinIndex(numberFreqs); // that is the min frequented number for this iteration
        node* iteratorPtr = iterationStartAt; // from here the search of min frequented number starts

        if (minIndex == -1) {
            break;
        }

        while (iteratorPtr->next) {
            if (iteratorPtr->next->data == minIndex) {
                // save the node
                node* matchedNode = iteratorPtr->next;
                // delete the node
                iteratorPtr->next = iteratorPtr->next->next;
                // set the node as the first node
                matchedNode->next = listHead;
                // change listHead
                listHead = matchedNode;
            }
            else {
                iteratorPtr = iteratorPtr->next;
            }
        }
    }

    return listHead;
}

char getMinIndex(int* numberFreqs) {
    int min = 999999999;
    int minIndex;
    char minIndexChanged = 0;

    for (int i = 0; i <= MAX_NUM; i++) {
        if (numberFreqs[i] && numberFreqs[i] < min) {
            minIndex = i;
            min = numberFreqs[i];
            minIndexChanged = 1;
        }
    }

    if (minIndexChanged) {
        numberFreqs[minIndex] = 0;
    }
    else {
        minIndex = -1;
    }

    return minIndex;
}
