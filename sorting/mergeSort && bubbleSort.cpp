// margesort and bubble sort
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void getInput(int arr[], int len) {
	for (int j=0; j<len; j++)
	{
		arr[j] = rand()%50+1;
	}
}
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d, ", arr[i]);
	}
}
void BubbleSort(int arr[], int len)
{
	int temp;
	int count = 0;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				
			}
			
		}
	}
}
void MargeSort(int arr[], int lb, int ub);
void Marge(int arr[], int lb, int mid, int ub);
int const n = 50;
void merge(int arr[], int p, int q, int r) {

	// Create L ← A[p..q] and M ← A[q+1..r]
	int n1 = q - p + 1;
	int n2 = r - q;

	int L[n], M[n];

	for (int i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (int j = 0; j < n2; j++)
		M[j] = arr[q + 1 + j];

	// Maintain current index of sub-arrays and main array
	int i, j, k;
	i = 0;
	j = 0;
	k = p;

	// Until we reach either end of either L or M, pick larger among
	// elements L and M and place them in the correct position at A[p..r]
	while (i < n1 && j < n2) {
		if (L[i] <= M[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = M[j];
			j++;
		}
		k++;
	}

	// When we run out of elements in either L or M,
	// pick up the remaining elements and put in A[p..r]
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = M[j];
		j++;
		k++;
	}
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
	if (l < r) {

		// m is the point where the array is divided into two subarrays
		int m = l + (r - l) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		// Merge the sorted subarrays
		merge(arr, l, m, r);
	}
}

int b[n];

void main()
{
	srand(time(NULL));
	int arr[5];
	
	int len = sizeof(arr) / sizeof(int);
	getInput(arr, len);
	print(arr, len);
	//BubbleSort(arr, len);
	MargeSort(arr, 0, len-1);
	printf("after sorting ??--??\n\n");
	print(arr, len);

}

void MargeSort(int arr[], int lb, int ub)
{
	if (lb < ub)
	{
		int mid = (lb + ub) / 2;
		MargeSort(arr, lb, mid);
		MargeSort(arr, mid + 1, ub);
		Marge(arr, lb, mid, ub);
	}

}

void Marge(int arr[], int lb, int mid, int ub)
{
	int i = lb;
	int j = mid+1;
	int k = lb;
	b[ub - lb + 1];


	while (i <= mid && j <= ub)
	{
		if (arr[i] <= arr[j])
		{
			b[k] = arr[i];
			i++;
		}
		else {
			b[k] = arr[j];
			j++;
		}
		k++;
	}
	if (i > mid)
	{
		while (j <= ub)
		{
			b[k] = arr[j];
			j++;
			k++;
		}
	}
	if (j > ub)
	{
		while (i <= mid)
		{
			b[k] = arr[i];
			i++;
			k++;
		}
	}
	k = 0;
	for (i = lb; i < ub; i++)
	{
		arr[i] = b[k];
		k++;
	}
}
