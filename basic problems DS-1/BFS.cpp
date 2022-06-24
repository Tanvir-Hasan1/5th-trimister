//#include<stdio.h>
//#include<stdbool.h>
//
//
//int selectOption();
//int pop(int data[]);
//void push(int data[], int v);
//int getTopElement(int data[]);
//int getStackSize();
//int top = -1;
//void enqueue(int data[], int);
//void dequeue(int data[]);
//int getFrontELement(int data[]);
//void reduceQueueSize();
//void BFS(int graph[100][100], int n, int data[100]);
//
//int main()
//{
//
//
//    int graph[100][100], data[100], n, ch, v, i, j;
//    int visited[100];
//    printf("Enter number of vertex: ");
//    scanf_s("%d", &n);
//    ch = selectOption();
//    while (ch = selectOption())
//    {
//        if (ch == 1)
//        {
//            for (i = 0; i < n; i++)
//            {
//                for (j = i + 1; j < n; j++)
//                {
//                    printf("Edge between %c and %c? ", 65 + i, 65 + j);
//                    scanf_s("%d", &graph[i][j]);
//                    graph[j][i] = graph[i][j];
//                }
//            }
//        }
//        else if (ch == 2)
//        {
//            int s;
//            char c;
//            printf("Enter source vertex: ");
//            fflush(stdin);
//            scanf_s("%c", &c);
//            s = c - 65;
//
//            push(data, s);
//            int vertex;
//            while (getStackSize() != 0)
//            {
//                vertex = pop(data);
//                if (visited[vertex] != 1)
//                {
//                    for (i = 0; i < n; i++)
//                    {
//                        if (graph[vertex][i] == 1)
//                            push(data, i);
//                    }
//                    visited[vertex] = 1;
//                    printf("%c visited\n", 65 + vertex);
//                }
//            }
//        }
//        else if (ch == 3)
//        {
//            BFS(graph, n, data);
//        }
//        else if (ch == 4)
//        {
//            for (i = 0; i < n; i++)
//            {
//                for (j = 0; j < n; j++)
//                {
//                    printf("%d\t", graph[i][j]);
//                }
//                printf("\n");
//            }
//        }
//        else
//        {
//            printf("Invalid choice. Please try again.\n\n");
//        }
//
//    }
//}
//int selectOption()
//{
//    printf("1. Create Graph\n");
//    printf("2. DFS\n");
//    printf("3. BFS\n");
//    printf("4. Print Graph\n");
//    printf("0. Exit\n");
//    printf("Enter your choice: ");
//    int n;
//    scanf_s("%d", &n);
//    return n;
//}
//int getStackSize()
//{
//    return top + 1;
//}
//int getTopElement(int data[])
//{
//    return data[top];
//}
//void push(int data[], int v)
//{
//    top++;
//    data[top] = v;
//    //return top;
//}
//int pop(int data[])
//{
//    int temp = data[top];
//    top--;
//    return temp;
//}
//
//void reduceQueueSize()
//{
//    top--;
//    return;
//}
//void enqueue(int data[], int element)
//{
//    push(data, element);
//
//}
//void dequeue(int data[])
//{
//    int temp[100];
//    int size = getStackSize();
//    for (int i = 1; i < 100; i++)
//    {
//        temp[i - 1] = data[i];
//    }
//    for (int i = 0; i < 100; i++)
//    {
//        data[i] = temp[i];
//    }
//    reduceQueueSize();
//
//}
//int getFrontELement(int data[])
//{
//    return data[0];
//}
//void BFS(int graph[100][100], int n, int data[100])
//{
//    int visited[100];
//    for (int i = 0; i < n; i++)visited[i] = 0;
//    int source = 0;
//    enqueue(data, source);
//    int order[100];
//    int pos = 0;
//
//
//    while (getStackSize() > 0)
//    {
//        int current = getFrontELement(data);
//        dequeue(data);
//        if (visited[current])
//            continue;
//        visited[current] = 1;
//        order[pos++] = (current);
//        for (int a = 0; a < n; a++)
//        {
//            if (a == current || graph[current][a] <= 0 || visited[a])
//                continue;
//            enqueue(data, a);
//        }
//    }
//    printf("BFS Travarsel: \n");
//    for (int j = 0; j < pos; j++)
//    {
//        if (j == 0)printf(" ");
//        printf("%c ", order[j] + 65);
//    }
//    printf("\n");
//
//}