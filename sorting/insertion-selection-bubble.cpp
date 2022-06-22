#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void insertionSort(int data[], int n);
void BubbleSort(int data[], int n);
void SelectionSort(int data[], int n);

void swap(int data[], int a, int b);
void printArray(int data[], int n);

void main()
{
	int data[100], n;
	printf("Enter number of elements: ");
	scanf_s("%d", &n);


	srand(time(NULL));//settng seed value of rand() by time function time(NULL) , null = current time;
	for (int i = 0; i < n; i++)
	{
		data[i] = rand()%100;//setting random value in array.   //seed value
	}

	printf("Before sorting");
	printArray(data, n);
	
	//insertion sort
	/*insertionSort(data, n);

	printf("after sorting: ");
	printArray(data, n);*/

	/*BubbleSort(data, n);
	printf("\n\nAfter sorting: ");
	printArray(data, n);*/

	SelectionSort(data, n);
	printf("\n\nAfter sorting: ");
	printArray(data, n);


}

void printArray(int data[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", data[i]);
	}

}

void insertionSort(int data[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = data[i];
		j = i - 1;

		while (j >= 0 && data[j] > key)
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = key;
	}
}

void BubbleSort(int data[], int n)
{
	int temp;
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1-i; j++)
		{
			if (data[j] > data[j+1])
			{
				temp = data [j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
}

void SelectionSort(int data[], int n)
{
	int min_idx;
	for (int i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (data[min_idx] > data[j])
			{
				min_idx = j;
			}
			
		}
		swap(data,min_idx, i);
	}
}
void swap(int data[], int a, int b)
{
	int temp;
	temp = data[b];
	data[b] = data[a];
	data[a] = temp;
}
