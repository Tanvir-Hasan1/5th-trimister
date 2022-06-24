//#include<stdio.h>
//
//
//void printArray(int graph[][100], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d	", graph[i][j]);
//		}
//		puts("");
//	}
//}
//int choice()
//{
//	printf("1. create graph\n");
//	printf("2. DFS \n");
//	printf("3. BFS\n");
//	printf("4. print matrix\n");
//	printf("0. exit\n");
//	int ch;
//	printf("\nEnter choice - "); scanf_s("%d", &ch);
//
//	return ch;
//
//}
//int push(int stack[],int top)
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
//int pop(int stack[])
//{
//	if (top == -1)
//		puts("empty");
//	else {
//		int temp = stack[top]; top--;
//		return temp;
//	}
//}
//int getStackSize()
//{
//	return top;
//}
//int top = -1;
//int main()
//{
//	char s;
//	int top = -1, v, source;
//	int ch ;
//	int n = 0;
//	int graph[100][100], visited[100], data[100], vertex;
//	while (ch = choice())
//	{
//		if (ch == 1)
//		{
//			printf("Enter a number of vertexes: ");
//			scanf_s("%d", &n);
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = i + 1; j < n; j++)
//				{
//					printf("eadge between %c and %c: ", i + 65, j + 65);
//					scanf_s("%d", &graph[i][j]);
//					graph[j][i] = graph[i][j];
//				}
//			}
//		}
//		else if (ch == 2)
//		{
//			printf("Enter source vertex: ");
//			fflush(stdin);
//			scanf_s("%c", & s);
//			source = s - 65;
//			push(data, source);
//			while (getStackSize() != 0)
//			{
//				vertex = pop(data);
//				if (visited[vertex] == 0)
//				{
//					for (int i = 0; i < n; i++)
//					{
//						if (graph[vertex][i] == 1)
//						{
//							push(data, i);
//						}
//						printf("%c visited",vertex+65);
//					}
//				}
//			}		}
//		else if (ch == 3)
//		{
//
//		}
//		else if (ch == 4)
//		{
//			puts("\n\nAdjacency matrix: ");
//			printArray(graph, n);
//		}
//		else puts("invalid input");
//
//		return 0;
//	}
//}
