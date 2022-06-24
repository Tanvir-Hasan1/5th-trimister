//#include<stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int choice();
//int enquaue(int quaue[], int rear, int data, int size);
//int dequaue(int quaue[], int rear, int data, int size);
//void printQueue(int queue[], int n);
//int enqueueRand(int queue[], int size, int rear);
//int qsize = 0;
//void main()
//{
//	srand(time(NULL));
//	int const n = 100;
//	int quaue[n]={0};
//	int front, rear;
//	front = rear = 0;
//	int size, ch, data=0;
//	
//	printf("enter the size of quaue ->> "); scanf_s("%d", &size);
//
//	while (ch = choice())
//	{
//		if (ch == 1)
//		{
//			if (qsize == size)
//			{
//				printf("unable to enquae\n");
//			}
//			else {
//				printf("enter data to enquae ->> ");
//				scanf_s("%d", &data);
//				rear = enquaue(quaue, rear, data, size);
//				qsize++;
//				printf("%d enquaed\n",data);
//			}
//		}
//		else if (ch == 2)
//		{
//			if (qsize == 0)
//			{
//				printf("unable to dequaue\n");
//			}
//			else {
//				printf("%d << - is removed\n", quaue[front]);
//				front = dequaue(quaue, front, data, size);
//				qsize--;
//			}
//		}
//		else if (ch == 3)
//		{
//			printf("Quaue size is ->> %d\n", qsize);
//		}
//		else if (ch == 4)
//		{
//			printf("front data ->> %d\n", quaue[front]);
//		}
//		else if (ch == 5)
//		{
//			printQueue(quaue, size);
//		}
//		else if (ch == 6)
//		{
//			if (qsize == size)
//			{
//				printf("stack is full");
//			}else
//			rear = enqueueRand(quaue, size, rear);
//		}
//		else printf("wrong input.\n");
//	}
//}
//
//int choice()
//{
//	printf("1. Enquaue\n");
//	printf("2. dequaue\n");
//	printf("3. size\n");
//	printf("4. front\n");
//	printf("5. print\n");
//	printf("6. randomly enqueue\n");
//	printf("0. exit\n");
//	int ch;
//	printf("\nEnter choice - "); scanf_s("%d", &ch);
//
//	return ch;
//
//}
//
//int enquaue(int quaue[], int rear, int data, int size)
//{
//	quaue[rear] = data;
//	rear = (rear+1) % size;
//	return rear;
//}
//
//int dequaue(int quaue[], int front, int data, int size)
//{
//	quaue[front] = data;
//	front = (front + 1) % size;
//	return front;
//}
//void printQueue(int queue[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", queue[i]);
//	}
//	puts("");
//}
//int enqueueRand(int queue[], int size, int rear)
//{
//	int data = 0;
//
//	for (int i = 0 ; i < size; i++)
//	{
//		if (qsize != size)
//		{
//			
//			data = rand() % 100 + 1;
//			rear = enquaue(queue, rear, data, size);
//			qsize++;
//		}
//		else {
//			printf("stack full");
//			break;
//		}
//	}
//
//	return rear;
//}
