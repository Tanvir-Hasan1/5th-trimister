//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void printArray(int data[], int size);
//void insertdata(int data[], int size);
//void function(int data[], int size, int count[]);
//int count_Array_operation(int data[], int size, int count[]);
//int selectOption();
//                                              //>>>>>> prototypes <<<<<<<<
//int main()
//{
//	srand(time(NULL));
//	int data[1001] = {};
//	int count[101]={};
//	int size, ch = 0;
//	printf("Enter size of the array - "); scanf_s("%d", &size);
//	while (ch = selectOption())
//	{
//		if(ch == 1){
//			insertdata(data, size);
//			puts("\n>>> data inserted successfully <<<");
//		}
//		else if (ch == 2) {
//			function(data, size, count);
//		}
//		else if (ch == 3)
//		{
//			printArray(data, size);
//		}
//		else if (ch == 4)
//		{
//			printf("Enter new size ->> ");
//			scanf_s("%d", &size);
//		}
//		else puts("wrong input\n");
//	}	
//}
//void insertdata(int data[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		data[i] = rand() % 100 + 1;
//	}
//}
//void printArray(int data[], int size)
//{
//	for(int i=0; i<size; i++)
//	{
//		printf("%d, ", data[i]);
//	}
//	puts("");
//}
//int selectOption(){	
//	int ch = 0;
//	printf("1. insert data\n");
//	puts("2. get multiple occurance");
//	puts("3. print data");
//	puts("4. change size of the array");
//	puts("0. exit");
//	scanf_s("%d", &ch);
//	return ch;
//}
//void function(int data[], int size,int count[]) {
//	int max;
//	max = count_Array_operation(data, size, count);
//	printf("max is - %d\n", max);
//	for (int i = 0; i < 101; i++)
//	{
//		if (count[i] == max)
//			printf("%d, ", i);
//	}
//	for (int i = 0; i < 101; i++){
//		count[i] = 0;
//	}
//	printf("Occured %d times\n", max);
//}
//int count_Array_operation(int data[], int size, int count[])
//{
//	int max = 0;
//	for (int i = 0; i < size; i++){
//		count[data[i]] += 1;
//	}	
//	for (int i = 0; i < 101; i++)
//	{
//		if (max < count[i])
//			max = count[i];
//	}return max;
//}
