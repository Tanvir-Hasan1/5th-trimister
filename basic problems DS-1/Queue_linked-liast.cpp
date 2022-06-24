//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//struct Node {
//	int data;
//	struct Node* next;
//};
//typedef struct Node node;
//
//// -- prototypes --
//int choose();
//void enqueue(int x);
//void dequeue();
//void display();
//void peak();
//void randInput(int num);
//
//node* front = NULL , * rear=NULL;
//int queueSize = 0;
//void main()
//{
//	srand(time(NULL));
//	int ch;
//	ch = choose();
//	
//	while (ch)
//	{
//		if (ch == 1)
//		{
//			int data;
//			printf("Enter value to enqueue ->> "); scanf_s("%d", &data);
//			enqueue(data);
//
//		}
//		else if (ch == 2)
//		{
//			dequeue();
//
//		}
//		else if (ch == 3)
//		{
//			display();
//		}
//		else if (ch == 4)
//			peak();
//		else if (ch == 5)
//			printf("queue size is ->> %d\n", queueSize);
//		else if (ch == 6)
//		{
//			int num;
//			printf("Enter number ->> ");
//			scanf_s("%d", &num);
//			randInput(num);
//		}
//		else printf("wrong entry **");
//		printf("\n\n");
//		ch = choose();
//	}
//}
//int choose()
//{
//	int ch;
//	printf("1. Enqueue data.\n");
//	printf("2. dequeue data.\n");
//	printf("3. display data.\n");
//	printf("4. peak data.\n");
//	printf("5. queue size.\n");
//	printf("6. Randomly input.\n");
//	printf("0. exit\n\n");
//	printf("->-> Enter choice: ");
//	scanf_s("%d", &ch);
//	return ch;
//}
//void enqueue(int x) 
//{
//	node* nn;
//	nn = new node();
//	//printf("nn crated---\n");
//	nn->data = x;
//	nn->next = NULL;
//	if (front == NULL && rear == NULL)
//	{
//		rear = nn;
//		//printf("rear is now at 1st node---\n"); printf("front is now at 1st node---\n\n");
//		front = rear;
//		
//		
//	}
//	else {
//		rear->next = nn;
//		rear = nn;
//		//printf("rear is now at last node---\n\n");
//	}
//	printf("%d << - inserted", rear->data);
//	queueSize++;
//
//}
//void dequeue()
//{
//	if (front == NULL)
//		printf("queue is empty");
//	
//	else
//	{
//		node* temp;
//		temp = front;
//		front = front->next;
//		//printf("front moved.\n");
//		printf("previous front  >> %d <<  deleted.\n", temp->data);
//		delete(temp);
//		
//		if (front == NULL)
//			rear = front;
//		queueSize--;
//	}
//}
//void display()
//{
//	node* temp = front;
//	if (front == NULL && rear == NULL)
//	{
//		printf("queue is empty");
//	}
//	else {
//	while (temp != NULL)
//	{
//		printf("%d ", temp->data);
//		temp = temp->next;
//	}
//	}
//}
//void peak()
//{
//	if (front == NULL)
//		printf("queue is empty");
//	else 
//	printf("first element is - %d", front->data);
//}
//
//void randInput(int num)
//{
//	int data;
//	for (int i = 0; i < num; i++)
//	{
//		data = rand() % 100 + 1;
//		enqueue(data);
//	}
//}