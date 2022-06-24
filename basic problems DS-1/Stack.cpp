//#include <stdio.h>
//
//int choice()
//{
//	printf("1. push\n");
//	printf("2. pop\n");
//	printf("3. size\n");
//	printf("4. top\n");
//	printf("0. exit\n");
//	int ch;
//	printf("\nEnter choice - "); scanf_s("%d", &ch);
//
//	return ch;
//
//}
//int push(int stack[],int top, int size)
//{
//	int data;
//	if (top + 1 == size)
//	{
//		puts("stack is full");
//	}
//	else {
//		printf("Enter data to push: ");
//		scanf_s("%d", &data);
//		top++;
//		stack[top] = data;
//	}
//	return top;
//}
//int pop(int stack[], int top)
//{
//	if (top == -1)
//		puts("empty");
//	else
//	return --top;
//}
//
//int getTop()
//{
//	return 0;
//}
//const int n = 100;
//void main()
//{
//	int stack[n], size, ch=0;
//	int top = -1;
//	puts("enter stack size: "); scanf_s("%d", &size);
//	ch = choice();
//	while (ch)
//	{
//		if (ch == 1)
//		{
//			top = push(stack, top, size);
//		}
//		else if (ch == 2)
//		{
//			top = pop(stack, top);
//		}
//		else if (ch == 3)
//		{
//			printf("stack size - %d\n\n", top+1);
//		}
//		else if (ch == 4)
//		{
//			if (top == -1)
//				puts("Stack is empty");
//			else printf("top is - %d\n", stack[top]);
//		}
//		else puts("invalid input");
//
//		ch = choice();
//
//	}
//
//}