#include<stdio.h>

int largest_even_number(int arr_even[],int size);
void print_arr(int arr[],int size);
void get_even_number_array(int arr[], int size);
void get_even_number_array(int arr[], int size);

const int n = 100;
void main()
{
    
	int arr[n], even_arr[n] , size, even_arr_size = 0;
	even_arr[0] = 1;
	printf("Enter the size of arr: ");
	scanf_s("%d", &size);
	
	printf("Enter %d numbers:\n",size);
	for (int i = 0 ; i < size ; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even_arr[even_arr_size] = arr[i];
			even_arr_size++;
		}
	}
	even_arr[0] == 1 ? printf("No even numbers found.") : printf("largest even number is: %d", largest_even_number(even_arr, even_arr_size));
	
	printf("\n\n\nAssigned array: ");
	print_arr(arr, size);
	printf("\nevened  array: ");
	print_arr(even_arr, even_arr_size);
}

int largest_even_number(int arr_even[], int size)
{
	int number= arr_even[0];
	for (int i = 1; i < size; i++)
	{
		if (number < arr_even[i]);
		number = arr_even[i];
	}
	return number;
}

void print_arr(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", arr[i]);
	}
}