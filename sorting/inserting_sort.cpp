#include<stdio.h>
#include<time.h>
#include <stdlib.h>


void insertion_sort_assendding(int arr[], int size);
void insertion_sort_dessendding(int arr[], int size);
void printArr(int arr[],int size);
void setArrValue(int arr[],int size);
const int n = 100;
void main()
{

	srand(time(NULL));// setting rand function's seed value.
	int arr[n], size;
	printf("Enter the size of array: "); scanf_s("%d", &size);
	
	setArrValue(arr, size);
	printArr(arr, size);
	
	//sort array with insertion sort algorithm.
	insertion_sort_assendding(arr, size);
	printf("\n\n\n afer sorting:\n\n");
	printArr(arr, size);
	printf("\n\n\n afer sorting decending order:\n\n");
	insertion_sort_dessendding(arr, size);
	printArr(arr, size);

}

void printArr(int arr[],int size)
{

	for (int i = 0; i < size; i++)
	{
		printf("%d, ",arr[i]);
	}
}

void setArrValue(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
}

void insertion_sort_assendding(int arr[], int size)
{
	int key, previous_index;
	for (int i = 1 ; i < size; i++)
	{
		key = arr[i];
		previous_index = i - 1;
		while (previous_index >= 0 && arr[previous_index] > key)// copiying the previous index value to next index value untill key is less then previous index value.
		{
			arr[previous_index + 1] = arr[previous_index];
			previous_index--;
		}
		arr[previous_index + 1] = key;
	}
}

void insertion_sort_dessendding(int arr[], int size)
{
	int key, previous_index;
	for (int i = 1; i < size; i++)
	{
		key = arr[i];
		previous_index = i - 1;
		while (previous_index >= 0 && arr[previous_index] < key)// copiying the previous index value to next index value untill key is less then previous index value.
		{
			arr[previous_index + 1] = arr[previous_index];
			previous_index--;
		}
		arr[previous_index + 1] = key;
	}
}
