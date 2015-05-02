#include<stdio.h>
#include<time.h>
#include<conio.h>
#include "quicksort.h"
#include "bubblesort.h"

int main()
{
	int n = 0;
	int i = 0;
	int choice = 0;

	// ask user for input
	printf("Please enter 1 for quicksort or 2 for bubblesort:");
	scanf_s("%d", &choice);
	printf("\nEnter the number of elements to sort: ");
	scanf_s("%d", &n);
	printf("Generating %d numbers...", n);

	// generate n random numbers where n is based on user input
	srand(time(NULL));
	int *randomNumbers = malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		*(randomNumbers + i) = rand();
	}

	if (choice == 1)
	{
		quicksort(randomNumbers, 0, n);
	}
	else if (choice == 2)
	{
		bubblesort(randomNumbers, n);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(randomNumbers + i));
	}
	scanf_s("%d", &n);
}