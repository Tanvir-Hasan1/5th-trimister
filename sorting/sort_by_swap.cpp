#include<stdlib.h>
#include<time.h>
#include <stdio.h>

void printDataofArray(int data[], int n);
int getminimunvalus(int data[], int n);
void sortBySwap(int data[], int n);

void main()
{
	int data[100], n;
	printf("Enter number of elements: ");
	scanf_s("%d", &n);

	srand(time(NULL));//settng seed value of rand() by time function time(NULL) , null = current time;
	for (int i = 0; i < n; i++)
	{
		data[i] = rand() % 100;//seed value
	}
	printDataofArray(data, n);


	sortBySwap(data, n);
	printf("\n\nAfter sorting: \n\n");

	printDataofArray(data, n);

}

void printDataofArray(int data[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", data[i]);
		
	}
}

int getminimunvalus(int data[], int n)
{
	int min=data[0];
	for (int i=0 ; i < n; i++)
	{
		if (data[i] < min)
			min = data[i];
	}
	return min;
}

void sortBySwap(int data[], int n)
{
	int i, j, min, minIndex, temp;

	for (i = 0; i < n; i++)
	{

		temp = data[i];
		min = data[i];
		minIndex = i;
		for (j=i+1; j < n; j++)
		{
			
			if (data[j] < min) {
			
				minIndex = j;
				min = data[j];
			}

		}
		data[i] = min;
		data[minIndex] = temp;

	}
}
