#include<stdio.h>
#include<time.h>
#include<conio.h>
#include "quicksort.h"
#include "bubblesort.h"

int main()
{
	int n = 0;
	int i = 0;

	// ask user for input
	printf("Enter the number of elements to sort: ");
	scanf_s("%d", &n);
	printf("Generating %d numbers...", n);

	// generate n random numbers where n is based on user input
	srand(time(NULL));
	int *randomNumbers = malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		*(randomNumbers + i) = rand();
	}

	bubblesort(randomNumbers, n);
}